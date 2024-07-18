void CWE369_Divide_by_Zero__float_rand_53_bad()
{
    float data;
    /* Initialize data */
    data = 0.0F;
    /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
    data = (float)RAND32();
    CWE369_Divide_by_Zero__float_rand_53b_badSink(data);
}