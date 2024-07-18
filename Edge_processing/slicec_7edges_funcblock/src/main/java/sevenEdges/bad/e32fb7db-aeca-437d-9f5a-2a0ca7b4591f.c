void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_61_bad()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_61b_badSource(data);
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcscat(dest, data);
        printWLine(data);
    }
}