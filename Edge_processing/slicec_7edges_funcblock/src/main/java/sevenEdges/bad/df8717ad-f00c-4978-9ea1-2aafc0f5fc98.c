void CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_22_badSink(wchar_t * data)
{
    if(CWE134_Uncontrolled_Format_String__wchar_t_environment_fprintf_22_badGlobal)
    {
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        fwprintf(stdout, data);
    }
}