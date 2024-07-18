void CWE134_Uncontrolled_Format_String__wchar_t_environment_vfprintf_66b_badSink(wchar_t * dataArray[])
{
    /* copy data out of dataArray */
    wchar_t * data = dataArray[2];
    badVaSink(data, data);
}