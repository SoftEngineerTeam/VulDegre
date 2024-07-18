void CWE134_Uncontrolled_Format_String__char_connect_socket_snprintf_42_bad()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = badSource(data);
    {
        char dest[100] = "";
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}