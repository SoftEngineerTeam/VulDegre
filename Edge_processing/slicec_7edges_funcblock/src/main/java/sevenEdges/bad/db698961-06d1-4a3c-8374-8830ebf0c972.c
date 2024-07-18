void CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_listen_socket_fprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fprintf(stdout, data);
}