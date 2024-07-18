void CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_file_w32_vsnprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    badVaSink(data, data);
}