static void badSink()
{
    wchar_t * data = CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_45_badData;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    wprintf(data);
}