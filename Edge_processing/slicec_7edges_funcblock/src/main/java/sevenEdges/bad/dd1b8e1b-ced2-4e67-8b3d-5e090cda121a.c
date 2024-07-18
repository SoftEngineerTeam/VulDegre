void CWE190_Integer_Overflow__int_rand_add_67_bad()
{
    int data;
    CWE190_Integer_Overflow__int_rand_add_67_structType myStruct;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    myStruct.structFirst = data;
    CWE190_Integer_Overflow__int_rand_add_67b_badSink(myStruct);
}