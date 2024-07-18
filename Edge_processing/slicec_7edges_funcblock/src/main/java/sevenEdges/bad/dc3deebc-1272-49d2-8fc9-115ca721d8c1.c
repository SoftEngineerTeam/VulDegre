void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_64_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a negative number */
    data = -1;
    CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_64b_badSink(&data);
}