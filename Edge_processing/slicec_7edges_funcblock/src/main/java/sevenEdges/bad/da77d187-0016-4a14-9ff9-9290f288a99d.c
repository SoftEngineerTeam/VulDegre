void CWE617_Reachable_Assertion__rand_53d_badSink(int data)
{
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}