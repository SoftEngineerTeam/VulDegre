void CWE134_Uncontrolled_Format_String__char_file_vprintf_22_badVaSink(char * data, ...)
{
    if(CWE134_Uncontrolled_Format_String__char_file_vprintf_22_badGlobal)
    {
        {
            va_list args;
            va_start(args, data);
            /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
            vprintf(data, args);
            va_end(args);
        }
    }
}