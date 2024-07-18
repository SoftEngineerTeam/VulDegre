void CWE126_Buffer_Overread__CWE129_large_54_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE126_Buffer_Overread__CWE129_large_54b_badSink(data);
}