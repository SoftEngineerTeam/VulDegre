void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
    }
}