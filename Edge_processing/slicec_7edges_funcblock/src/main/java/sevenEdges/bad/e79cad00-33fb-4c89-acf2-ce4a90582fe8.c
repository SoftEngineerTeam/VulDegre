static void badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_connect_socket_fprintf_45_badData;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fprintf(stdout, data);
}