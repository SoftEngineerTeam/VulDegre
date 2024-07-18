void CWE194_Unexpected_Sign_Extension__negative_strncpy_53_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    CWE194_Unexpected_Sign_Extension__negative_strncpy_53b_badSink(data);
}