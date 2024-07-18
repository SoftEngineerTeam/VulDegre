void CWE194_Unexpected_Sign_Extension__negative_memcpy_68_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    CWE194_Unexpected_Sign_Extension__negative_memcpy_68_badData = data;
    CWE194_Unexpected_Sign_Extension__negative_memcpy_68b_badSink();
}