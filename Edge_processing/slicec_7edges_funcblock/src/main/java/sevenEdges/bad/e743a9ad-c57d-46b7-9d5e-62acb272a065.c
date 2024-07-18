void CWE121_Stack_Based_Buffer_Overflow__CWE135_67_bad()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67_structType myStruct;
    data = NULL;
    /* POTENTIAL FLAW: Set data to point to a wide string */
    data = (void *)WIDE_STRING;
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_67b_badSink(myStruct);
}