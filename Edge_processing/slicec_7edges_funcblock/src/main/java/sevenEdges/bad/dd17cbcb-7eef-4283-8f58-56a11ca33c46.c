void CWE369_Divide_by_Zero__float_zero_64_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    /* POTENTIAL FLAW: Set data to zero */
    data = 0.0F;
    CWE369_Divide_by_Zero__float_zero_64b_badSink(&data);
}