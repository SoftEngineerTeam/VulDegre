void CWE134_Uncontrolled_Format_String__char_file_printf_68b_badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_file_printf_68_badData;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    printf(data);
}