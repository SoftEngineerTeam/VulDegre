void CWE127_Buffer_Underread__CWE839_fscanf_53_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE127_Buffer_Underread__CWE839_fscanf_53b_badSink(data);
}