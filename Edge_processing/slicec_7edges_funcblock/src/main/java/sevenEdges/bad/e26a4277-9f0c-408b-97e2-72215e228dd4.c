void CWE134_Uncontrolled_Format_String__char_file_snprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_file_snprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100] = "";
        /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
        SNPRINTF(dest, 100-1, data);
        printLine(dest);
    }
}