int CWE195_Signed_to_Unsigned_Conversion_Error__fscanf_malloc_61b_badSource(int data)
{
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    return data;
}