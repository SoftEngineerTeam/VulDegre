void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_52_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a negative number */
    data = -1;
    CWE195_Signed_to_Unsigned_Conversion_Error__negative_memcpy_52b_badSink(data);
}