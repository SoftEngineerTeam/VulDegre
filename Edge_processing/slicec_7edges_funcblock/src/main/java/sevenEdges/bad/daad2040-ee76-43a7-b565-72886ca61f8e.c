void CWE121_Stack_Based_Buffer_Overflow__CWE135_53_bad()
{
    void * data;
    data = NULL;
    /* POTENTIAL FLAW: Set data to point to a wide string */
    data = (void *)WIDE_STRING;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_53b_badSink(data);
}