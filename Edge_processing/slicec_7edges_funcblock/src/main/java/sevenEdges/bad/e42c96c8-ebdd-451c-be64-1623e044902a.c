void CWE134_Uncontrolled_Format_String__char_connect_socket_snprintf_52c_badSink(char * data)
{
    {
        char dest[100] = "";
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}