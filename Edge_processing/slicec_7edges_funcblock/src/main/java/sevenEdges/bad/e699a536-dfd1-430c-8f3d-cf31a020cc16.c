void CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_printf_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    wprintf(data);
}