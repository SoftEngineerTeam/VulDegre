void CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_vfprintf_42_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = badSource(data);
    badVaSink(data, data);
}