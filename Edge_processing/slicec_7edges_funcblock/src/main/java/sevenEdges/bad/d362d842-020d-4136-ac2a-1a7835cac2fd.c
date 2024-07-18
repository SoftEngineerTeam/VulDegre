void CWE127_Buffer_Underread__CWE839_rand_51_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE127_Buffer_Underread__CWE839_rand_51b_badSink(data);
}