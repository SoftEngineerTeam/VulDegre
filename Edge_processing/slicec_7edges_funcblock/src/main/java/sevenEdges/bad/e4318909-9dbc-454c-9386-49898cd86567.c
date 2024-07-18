void CWE134_Uncontrolled_Format_String__char_file_snprintf_68b_badSink()
{
    char * data = CWE134_Uncontrolled_Format_String__char_file_snprintf_68_badData;
    {
        char dest[100] = "";
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}