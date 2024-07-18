void CWE369_Divide_by_Zero__int_rand_modulo_53_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE369_Divide_by_Zero__int_rand_modulo_53b_badSink(data);
}