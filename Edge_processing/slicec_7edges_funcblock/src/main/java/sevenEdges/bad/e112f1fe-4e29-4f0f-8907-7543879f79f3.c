void CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_connect_socket_vfprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    badVaSink(data, data);
}