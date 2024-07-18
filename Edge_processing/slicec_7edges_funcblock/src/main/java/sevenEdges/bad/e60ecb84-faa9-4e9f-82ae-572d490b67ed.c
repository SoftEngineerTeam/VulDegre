void CWE121_Stack_Based_Buffer_Overflow__CWE135_34_bad()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType myUnion;
    data = NULL;
    /* POTENTIAL FLAW: Set data to point to a wide string */
    data = (void *)WIDE_STRING;
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
    }
}