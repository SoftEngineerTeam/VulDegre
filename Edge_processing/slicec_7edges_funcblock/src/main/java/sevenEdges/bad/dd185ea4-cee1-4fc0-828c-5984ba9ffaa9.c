void CWE124_Buffer_Underwrite__CWE839_fscanf_45_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE124_Buffer_Underwrite__CWE839_fscanf_45_badData = data;
    badSink();
}