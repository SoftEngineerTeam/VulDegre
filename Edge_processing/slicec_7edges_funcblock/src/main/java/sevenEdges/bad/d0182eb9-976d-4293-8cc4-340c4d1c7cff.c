void CWE427_Uncontrolled_Search_Path_Element__wchar_t_connect_socket_68b_badSink()
{
    wchar_t * data = CWE427_Uncontrolled_Search_Path_Element__wchar_t_connect_socket_68_badData;
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}