void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_snprintf_68b_badSink()
{
    wchar_t * data = CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_snprintf_68_badData;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}