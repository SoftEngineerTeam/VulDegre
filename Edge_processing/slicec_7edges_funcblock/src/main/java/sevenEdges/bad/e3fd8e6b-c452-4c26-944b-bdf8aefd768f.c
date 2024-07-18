void CWE134_Uncontrolled_Format_String__char_environment_vprintf_68b_badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_environment_vprintf_68_badData;
    badVaSink(data, data);
}