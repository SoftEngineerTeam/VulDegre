void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_badVaSink(wchar_t * data, ...)
{
    if(CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_badGlobal)
    {
        {
            wchar_t dest[100] = L"";
            va_list args;
            va_start(args, data);
            /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
            _vsnwprintf(dest, 100-1, data, args);
            va_end(args);
            printWLine(dest);
        }
    }
}