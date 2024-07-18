void CWE617_Reachable_Assertion__connect_socket_21_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    badStatic = 1; /* true */
    data = badSource(data);
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}