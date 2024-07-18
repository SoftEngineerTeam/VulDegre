void CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_53_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FLAW: Use a negative number */
    data = -1;
    CWE195_Signed_to_Unsigned_Conversion_Error__negative_memmove_53b_badSink(data);
}