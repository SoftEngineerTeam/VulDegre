void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_snprintf_51b_badSink(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}