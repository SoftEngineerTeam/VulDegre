void CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_22_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_22_badGlobal = 1; /* true */
    data = CWE195_Signed_to_Unsigned_Conversion_Error__rand_malloc_22_badSource(data);
    /* Assume we want to allocate a relatively small buffer */
    if (data < 100)
    {
        /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
         * the conversion will cause malloc() to allocate a very large amount of data or fail */
        char * dataBuffer = (char *)malloc(data);
        /* Do something with dataBuffer */
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}