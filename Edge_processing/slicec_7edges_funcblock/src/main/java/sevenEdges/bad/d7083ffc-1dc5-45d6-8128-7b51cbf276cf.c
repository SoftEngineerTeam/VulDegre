void CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_22_badSink(wchar_t * data)
{
    if(CWE134_Uncontrolled_Format_String__wchar_t_console_snprintf_22_badGlobal)
    {
        {
            wchar_t dest[100] = L"";
            /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}