void CWE134_Uncontrolled_Format_String__char_console_vfprintf_42_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = badSource(data);
    badVaSink(data, data);
}