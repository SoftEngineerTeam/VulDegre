void CWE194_Unexpected_Sign_Extension__fscanf_malloc_17_bad()
{
    int i;
    short data;
    /* Initialize data */
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* FLAW: Use a value input from the console using fscanf() */
        fscanf (stdin, "%hd", &data);
    }
    /* Assume we want to allocate a relatively small buffer */
    if (data < 100)
    {
        /* POTENTIAL FLAW: malloc() takes a size_t (unsigned int) as input and therefore if it is negative,
         * the conversion will cause malloc() to allocate a very large amount of data or fail */
        char * dataBuffer = (char *)malloc(data);
        if (dataBuffer == NULL) {exit(-1);}
        /* Do something with dataBuffer */
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}