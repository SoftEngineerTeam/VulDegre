void CWE134_Uncontrolled_Format_String__wchar_t_file_printf_22_badSink(wchar_t * data)
{
    if(CWE134_Uncontrolled_Format_String__wchar_t_file_printf_22_badGlobal)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        wprintf(data);
    }
}