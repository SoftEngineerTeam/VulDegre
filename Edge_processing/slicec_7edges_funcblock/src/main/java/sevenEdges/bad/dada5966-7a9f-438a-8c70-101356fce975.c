void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_snprintf_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_snprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        SNPRINTF(dest, wcslen(data), L"%s", data);
        printWLine(data);
    }
}