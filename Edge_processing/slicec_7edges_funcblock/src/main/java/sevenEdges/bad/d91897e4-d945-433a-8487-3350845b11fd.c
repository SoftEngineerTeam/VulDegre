void CWE134_Uncontrolled_Format_String__char_console_printf_53d_badSink(char * data)
{
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    printf(data);
}