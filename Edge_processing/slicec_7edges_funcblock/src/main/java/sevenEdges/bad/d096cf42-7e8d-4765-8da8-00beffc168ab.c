void CWE617_Reachable_Assertion__fscanf_67b_badSink(CWE617_Reachable_Assertion__fscanf_67_structType myStruct)
{
    int data = myStruct.structFirst;
    /* POTENTIAL FLAW: this assertion could trigger if n <= ASSERT_VALUE */
    assert(data > ASSERT_VALUE);
}