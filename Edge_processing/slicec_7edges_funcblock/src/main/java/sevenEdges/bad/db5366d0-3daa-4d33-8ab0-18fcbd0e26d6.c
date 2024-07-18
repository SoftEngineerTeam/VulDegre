void CWE126_Buffer_Overread__char_alloca_memmove_66_bad()
{
    char * data;
    char * dataArray[5];
    char * dataBadBuffer = (char *)ALLOCA(50*sizeof(char));
    char * dataGoodBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBadBuffer, 'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = '\0'; /* null terminate */
    memset(dataGoodBuffer, 'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = '\0'; /* null terminate */
    /* FLAW: Set data pointer to a small buffer */
    data = dataBadBuffer;
    /* put data in array */
    dataArray[2] = data;
    CWE126_Buffer_Overread__char_alloca_memmove_66b_badSink(dataArray);
}