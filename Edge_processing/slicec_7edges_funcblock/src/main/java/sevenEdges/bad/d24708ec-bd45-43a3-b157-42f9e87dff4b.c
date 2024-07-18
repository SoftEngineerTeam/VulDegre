void CWE134_Uncontrolled_Format_String__wchar_t_console_vprintf_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    badVaSink(data, data);
}