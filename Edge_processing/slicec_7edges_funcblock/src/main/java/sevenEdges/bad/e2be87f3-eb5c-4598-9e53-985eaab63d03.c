void CWE617_Reachable_Assertion__rand_63_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE617_Reachable_Assertion__rand_63b_badSink(&data);
}