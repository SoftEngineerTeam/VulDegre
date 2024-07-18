void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_68b_badSink()
{
    wchar_t * data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cat_68_badData;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcscat(dest, data);
        printWLine(data);
    }
}