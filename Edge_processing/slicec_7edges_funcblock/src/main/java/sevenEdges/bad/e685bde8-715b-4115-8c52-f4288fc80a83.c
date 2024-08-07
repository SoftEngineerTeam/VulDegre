void CWE194_Unexpected_Sign_Extension__rand_malloc_32_bad()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    /* Initialize data */
    data = 0;
    {
        short data = *dataPtr1;
        /* FLAW: Use a random value that could be less than 0 */
        data = (short)RAND32();
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
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
}