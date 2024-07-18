void CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_22_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_22_badGlobal = 1; /* true */
    data = CWE427_Uncontrolled_Search_Path_Element__wchar_t_console_22_badSource(data);
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}