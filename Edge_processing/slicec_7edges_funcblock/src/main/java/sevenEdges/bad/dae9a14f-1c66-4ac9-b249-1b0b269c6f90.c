void CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_68b_badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_68_badData;
    badVaSink(data, data);
}