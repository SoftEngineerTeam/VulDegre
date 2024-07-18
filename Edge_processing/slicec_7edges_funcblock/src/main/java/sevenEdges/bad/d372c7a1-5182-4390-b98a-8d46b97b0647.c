void CWE134_Uncontrolled_Format_String__char_console_printf_42_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = badSource(data);
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    printf(data);
}