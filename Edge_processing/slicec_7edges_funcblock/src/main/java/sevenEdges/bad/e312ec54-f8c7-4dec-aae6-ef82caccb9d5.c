void CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67b_badSink(CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}