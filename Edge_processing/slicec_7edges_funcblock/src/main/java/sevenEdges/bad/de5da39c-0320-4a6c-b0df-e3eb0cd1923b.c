void CWE369_Divide_by_Zero__int_rand_divide_67_bad()
{
    int data;
    CWE369_Divide_by_Zero__int_rand_divide_67_structType myStruct;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    myStruct.structFirst = data;
    CWE369_Divide_by_Zero__int_rand_divide_67b_badSink(myStruct);
}