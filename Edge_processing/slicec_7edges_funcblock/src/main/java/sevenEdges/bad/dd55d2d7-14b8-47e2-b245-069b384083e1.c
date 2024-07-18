void CWE134_Uncontrolled_Format_String__wchar_t_file_vprintf_67b_badSink(CWE134_Uncontrolled_Format_String__wchar_t_file_vprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    badVaSink(data, data);
}