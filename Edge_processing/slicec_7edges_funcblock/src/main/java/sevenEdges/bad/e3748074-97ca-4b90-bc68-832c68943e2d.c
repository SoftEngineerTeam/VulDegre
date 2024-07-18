int CWE197_Numeric_Truncation_Error__int_rand_to_short_61b_badSource(int data)
{
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    return data;
}