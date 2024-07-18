int CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_61b_badSource(int data)
{
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    return data;
}