void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_68b_badSink()
{
    wchar_t * data = CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_68_badData;
    {
        wchar_t source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
    }
}