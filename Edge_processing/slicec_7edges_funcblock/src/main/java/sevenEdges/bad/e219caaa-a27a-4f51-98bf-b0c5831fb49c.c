void CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_22_badVaSink(char * data, ...)
{
    if(CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_22_badGlobal)
    {
        {
            char dest[100] = "";
            va_list args;
            va_start(args, data);
            /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
            vsnprintf(dest, 100-1, data, args);
            va_end(args);
            printLine(dest);
        }
    }
}