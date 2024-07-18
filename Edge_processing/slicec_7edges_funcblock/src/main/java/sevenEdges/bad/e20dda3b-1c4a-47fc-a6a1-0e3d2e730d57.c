FILE * CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_61b_badSource(FILE * data)
{
    /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
    data = fopen("BadSource_fopen.txt", "w+");
    return data;
}