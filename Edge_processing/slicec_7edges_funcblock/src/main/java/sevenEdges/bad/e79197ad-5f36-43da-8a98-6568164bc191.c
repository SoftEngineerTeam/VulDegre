static void badSink()
{
    wchar_t * data = CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_45_badData;
    badVaSink(data, data);
}