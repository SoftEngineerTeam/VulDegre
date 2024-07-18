void CWE369_Divide_by_Zero__float_rand_65_bad()
{
    float data;
    /* define a function pointer */
    void (*funcPtr) (float) = CWE369_Divide_by_Zero__float_rand_65b_badSink;
    /* Initialize data */
    data = 0.0F;
    /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
    data = (float)RAND32();
    /* use the function pointer */
    funcPtr(data);
}