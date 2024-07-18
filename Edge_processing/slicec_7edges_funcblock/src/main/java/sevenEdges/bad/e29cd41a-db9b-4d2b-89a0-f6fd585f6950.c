void CWE194_Unexpected_Sign_Extension__listen_socket_strncpy_22_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    CWE194_Unexpected_Sign_Extension__listen_socket_strncpy_22_badGlobal = 1; /* true */
    data = CWE194_Unexpected_Sign_Extension__listen_socket_strncpy_22_badSource(data);
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
             * the sign extension could result in a very large number */
            strncpy(dest, source, data);
            dest[data] = '\0'; /* strncpy() does not always NULL terminate */
        }
        printLine(dest);
    }
}