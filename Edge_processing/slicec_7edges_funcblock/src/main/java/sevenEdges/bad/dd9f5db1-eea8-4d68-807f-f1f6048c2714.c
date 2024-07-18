void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_54e_badSink(wchar_t * data)
{
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    wprintf(data);
}