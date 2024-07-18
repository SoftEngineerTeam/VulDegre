float CWE369_Divide_by_Zero__float_rand_61b_badSource(float data)
{
    /* POTENTIAL FLAW: Use a random number that could possibly equal zero */
    data = (float)RAND32();
    return data;
}