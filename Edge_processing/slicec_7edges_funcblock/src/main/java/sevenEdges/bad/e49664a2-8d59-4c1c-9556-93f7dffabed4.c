void CWE134_Uncontrolled_Format_String__char_file_fprintf_51b_badSink(char * data)
{
    /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
    fprintf(stdout, data);
}