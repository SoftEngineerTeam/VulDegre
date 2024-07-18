void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_61_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_61b_badSource(data);
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fwprintf(stdout, data);
}