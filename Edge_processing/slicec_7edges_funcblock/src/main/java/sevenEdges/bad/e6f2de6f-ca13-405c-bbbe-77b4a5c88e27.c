void CWE124_Buffer_Underwrite__char_declare_memcpy_54_bad()
{
    char * data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    CWE124_Buffer_Underwrite__char_declare_memcpy_54b_badSink(data);
}