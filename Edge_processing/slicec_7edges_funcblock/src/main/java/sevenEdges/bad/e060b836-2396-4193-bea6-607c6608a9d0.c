void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_66_bad()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    /* put data in array */
    dataArray[2] = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_66b_badSink(dataArray);
}