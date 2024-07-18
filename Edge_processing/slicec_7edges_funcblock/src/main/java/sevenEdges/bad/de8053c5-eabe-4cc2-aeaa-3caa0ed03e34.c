void CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_64_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    CWE195_Signed_to_Unsigned_Conversion_Error__rand_strncpy_64b_badSink(&data);
}