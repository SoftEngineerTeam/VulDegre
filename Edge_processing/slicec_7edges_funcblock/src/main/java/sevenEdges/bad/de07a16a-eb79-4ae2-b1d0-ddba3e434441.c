void CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memcpy_51_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_memcpy_51b_badSink(data);
}