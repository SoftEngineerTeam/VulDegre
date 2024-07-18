void CWE124_Buffer_Underwrite__char_alloca_ncpy_53_bad()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    CWE124_Buffer_Underwrite__char_alloca_ncpy_53b_badSink(data);
}