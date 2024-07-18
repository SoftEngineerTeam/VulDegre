void CWE121_Stack_Based_Buffer_Overflow__CWE135_66_bad()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    /* POTENTIAL FLAW: Set data to point to a wide string */
    data = (void *)WIDE_STRING;
    /* put data in array */
    dataArray[2] = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_66b_badSink(dataArray);
}