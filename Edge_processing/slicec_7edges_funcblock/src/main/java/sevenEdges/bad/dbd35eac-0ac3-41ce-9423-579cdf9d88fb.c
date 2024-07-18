void CWE369_Divide_by_Zero__int_zero_divide_51b_badSink(int data)
{
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 / data);
}