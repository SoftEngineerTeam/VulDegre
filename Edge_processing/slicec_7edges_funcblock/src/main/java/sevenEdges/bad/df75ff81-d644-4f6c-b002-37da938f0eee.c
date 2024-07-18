void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66_bad()
{
    char * data;
    char * dataArray[5];
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = '\0'; /* null terminate */
    /* put data in array */
    dataArray[2] = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_66b_badSink(dataArray);
}