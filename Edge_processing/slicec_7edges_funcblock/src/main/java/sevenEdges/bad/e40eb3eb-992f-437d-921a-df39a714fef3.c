void CWE127_Buffer_Underread__CWE839_negative_51_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = -5;
    CWE127_Buffer_Underread__CWE839_negative_51b_badSink(data);
}