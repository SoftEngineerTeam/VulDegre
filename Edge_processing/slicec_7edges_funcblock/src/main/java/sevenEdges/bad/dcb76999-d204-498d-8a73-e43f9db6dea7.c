void CWE617_Reachable_Assertion__fixed_45_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a value less than the assert value */
    data = ASSERT_VALUE-1;
    CWE617_Reachable_Assertion__fixed_45_badData = data;
    badSink();
}