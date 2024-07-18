void CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_fprintf_65b_badSink(wchar_t * data)
{
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fwprintf(stdout, data);
}