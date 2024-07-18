static void badSink()
{
    wchar_t * data = CWE134_Uncontrolled_Format_String__wchar_t_console_fprintf_45_badData;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fwprintf(stdout, data);
}