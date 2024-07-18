void CWE126_Buffer_Overread__char_alloca_memcpy_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE126_Buffer_Overread__char_alloca_memcpy_65b_badSink;
    char * dataBadBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBadBuffer, 'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = '\0'; /* null terminate */
    memset(dataGoodBuffer, 'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = '\0'; /* null terminate */
    /* FLAW: Set data pointer to a small buffer */
    data = dataBadBuffer;
    /* use the function pointer */
    funcPtr(data);
}