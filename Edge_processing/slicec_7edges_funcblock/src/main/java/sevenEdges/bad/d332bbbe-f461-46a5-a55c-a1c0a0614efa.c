void CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    badVaSink(data, data);
}