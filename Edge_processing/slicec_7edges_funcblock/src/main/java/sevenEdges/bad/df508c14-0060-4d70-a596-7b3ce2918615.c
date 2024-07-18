void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_bad()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_badGlobal = 1; /* true */
    data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_22_badSource(data);
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        wcscpy(dest, data);
        printWLine(data);
    }
}