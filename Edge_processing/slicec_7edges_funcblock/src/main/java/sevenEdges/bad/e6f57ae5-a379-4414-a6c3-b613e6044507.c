void CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67b_badSink(CWE134_Uncontrolled_Format_String__wchar_t_file_w32_vsnprintf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    badVaSink(data, data);
}