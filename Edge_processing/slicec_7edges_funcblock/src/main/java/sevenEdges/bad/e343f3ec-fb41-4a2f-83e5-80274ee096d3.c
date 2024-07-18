void CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
        wcscat(dest, data);
        printWLine(data);
    }
}