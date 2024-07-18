static void badSink()
{
    char * data = CWE427_Uncontrolled_Search_Path_Element__char_environment_45_badData;
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}