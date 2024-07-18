static void badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_environment_w32_vsnprintf_45_badData;
    badVaSink(data, data);
}