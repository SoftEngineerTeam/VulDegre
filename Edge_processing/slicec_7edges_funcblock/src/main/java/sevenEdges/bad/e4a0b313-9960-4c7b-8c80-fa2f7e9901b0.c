void CWE427_Uncontrolled_Search_Path_Element__wchar_t_environment_63b_badSink(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}