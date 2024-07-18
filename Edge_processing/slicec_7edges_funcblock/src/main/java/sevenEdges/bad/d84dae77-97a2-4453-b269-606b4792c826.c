void CWE369_Divide_by_Zero__int_rand_divide_63b_badSink(int * dataPtr)
{
    int data = *dataPtr;
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 / data);
}