void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_65b_badSink(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        wcscpy(data, source);
        printWLine(data);
    }
}