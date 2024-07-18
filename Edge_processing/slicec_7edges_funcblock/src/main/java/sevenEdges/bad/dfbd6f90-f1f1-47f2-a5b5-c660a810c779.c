void CWE194_Unexpected_Sign_Extension__rand_strncpy_53_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a random value that could be less than 0 */
    data = (short)RAND32();
    CWE194_Unexpected_Sign_Extension__rand_strncpy_53b_badSink(data);
}