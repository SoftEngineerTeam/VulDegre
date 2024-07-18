void CWE134_Uncontrolled_Format_String__wchar_t_file_vprintf_68b_badSink()
{
    wchar_t * data = CWE134_Uncontrolled_Format_String__wchar_t_file_vprintf_68_badData;
    badVaSink(data, data);
}