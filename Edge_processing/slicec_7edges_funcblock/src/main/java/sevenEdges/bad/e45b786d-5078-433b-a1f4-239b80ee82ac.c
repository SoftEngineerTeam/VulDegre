void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
        memset(data, 'A', 100-1); /* fill with 'A's */
        data[100-1] = '\0'; /* null terminate */
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[50] = "";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
            strcat(dest, data);
            printLine(data);
        }
    }
}