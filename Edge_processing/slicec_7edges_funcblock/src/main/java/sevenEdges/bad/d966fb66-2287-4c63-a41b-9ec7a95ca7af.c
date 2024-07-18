void CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_declare_ncpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; /* Ensure the destination buffer is null terminated */
        printWLine(data);
    }
}