void CWE124_Buffer_Underwrite__malloc_char_cpy_68_bad()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
    }
    CWE124_Buffer_Underwrite__malloc_char_cpy_68_badData = data;
    CWE124_Buffer_Underwrite__malloc_char_cpy_68b_badSink();
}