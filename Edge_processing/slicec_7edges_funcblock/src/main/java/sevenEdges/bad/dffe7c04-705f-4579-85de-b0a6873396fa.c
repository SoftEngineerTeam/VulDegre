void CWE427_Uncontrolled_Search_Path_Element__wchar_t_connect_socket_21_bad()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    badStatic = 1; /* true */
    data = badSource(data);
    /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
    PUTENV(data);
}