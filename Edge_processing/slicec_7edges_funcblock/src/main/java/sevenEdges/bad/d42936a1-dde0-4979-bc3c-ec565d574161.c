void CWE194_Unexpected_Sign_Extension__negative_memcpy_52_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    CWE194_Unexpected_Sign_Extension__negative_memcpy_52b_badSink(data);
}