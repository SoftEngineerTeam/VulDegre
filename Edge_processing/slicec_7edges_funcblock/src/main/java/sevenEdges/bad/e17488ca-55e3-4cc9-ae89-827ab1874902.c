void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_68b_badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_68_badData;
    badVaSink(data, data);
}