void CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_53_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE121_Stack_Based_Buffer_Overflow__CWE129_fscanf_53b_badSink(data);
}