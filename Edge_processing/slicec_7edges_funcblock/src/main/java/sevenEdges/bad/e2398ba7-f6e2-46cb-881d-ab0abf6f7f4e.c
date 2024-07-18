void CWE126_Buffer_Overread__CWE129_rand_45_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE126_Buffer_Overread__CWE129_rand_45_badData = data;
    badSink();
}