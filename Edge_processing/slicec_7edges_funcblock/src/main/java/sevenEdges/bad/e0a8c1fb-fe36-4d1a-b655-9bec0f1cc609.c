void CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_22_badVaSink(wchar_t * data, ...)
{
    if(CWE134_Uncontrolled_Format_String__wchar_t_console_vfprintf_22_badGlobal)
    {
        {
            va_list args;
            va_start(args, data);
            /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
            vfwprintf(stdout, data, args);
            va_end(args);
        }
    }
}