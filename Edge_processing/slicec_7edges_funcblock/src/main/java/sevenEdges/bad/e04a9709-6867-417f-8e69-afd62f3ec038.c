void CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67b_badSink(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType myStruct)
{
    int data = myStruct.structFirst;
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