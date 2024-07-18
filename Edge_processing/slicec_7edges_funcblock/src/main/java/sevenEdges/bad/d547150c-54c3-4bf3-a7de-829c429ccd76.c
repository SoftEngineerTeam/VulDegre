void CWE369_Divide_by_Zero__int_zero_divide_64_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to zero */
    data = 0;
    CWE369_Divide_by_Zero__int_zero_divide_64b_badSink(&data);
}