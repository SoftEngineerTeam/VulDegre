void CWE121_Stack_Based_Buffer_Overflow__CWE135_11_bad()
{
    void * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to point to a wide string */
        data = (void *)WIDE_STRING;
    }
    if(globalReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
    }
}