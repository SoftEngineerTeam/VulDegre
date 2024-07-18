void CWE617_Reachable_Assertion__fixed_52c_badSink(int data)
{
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}