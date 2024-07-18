void CWE617_Reachable_Assertion__fixed_08_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    if(staticReturnsTrue())
    {
        /* FLAW: Use a value less than the assert value */
        data = ASSERT_VALUE-1;
    }
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}