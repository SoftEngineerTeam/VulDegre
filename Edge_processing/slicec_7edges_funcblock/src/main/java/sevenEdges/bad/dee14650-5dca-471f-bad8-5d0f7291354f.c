void CWE126_Buffer_Overread__char_declare_memcpy_64_bad()
{
    char * data;
    char dataBadBuffer[50];
    char dataGoodBuffer[100];
    memset(dataBadBuffer, 'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = '\0'; /* null terminate */
    memset(dataGoodBuffer, 'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = '\0'; /* null terminate */
    /* FLAW: Set data pointer to a small buffer */
    data = dataBadBuffer;
    CWE126_Buffer_Overread__char_declare_memcpy_64b_badSink(&data);
}