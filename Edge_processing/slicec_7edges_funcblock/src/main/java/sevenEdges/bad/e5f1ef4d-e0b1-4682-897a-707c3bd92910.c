void CWE134_Uncontrolled_Format_String__wchar_t_console_printf_67b_badSink(CWE134_Uncontrolled_Format_String__wchar_t_console_printf_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    wprintf(data);
}