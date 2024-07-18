void CWE617_Reachable_Assertion__listen_socket_42_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource(data);
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}