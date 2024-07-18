static void badSink()
{
    wchar_t * data = CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_45_badData;
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}