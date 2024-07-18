void CWE134_Uncontrolled_Format_String__char_console_printf_22_badSink(char * data)
{
    if(CWE134_Uncontrolled_Format_String__char_console_printf_22_badGlobal)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        printf(data);
    }
}