void CWE126_Buffer_Overread__CWE129_fscanf_53_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE126_Buffer_Overread__CWE129_fscanf_53b_badSink(data);
}