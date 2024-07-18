void CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_68b_badSink()
{
    wchar_t * data = CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_68_badData;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fwprintf(stdout, data);
}