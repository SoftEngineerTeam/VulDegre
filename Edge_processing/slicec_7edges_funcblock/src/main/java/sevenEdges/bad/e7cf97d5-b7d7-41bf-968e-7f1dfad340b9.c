void CWE194_Unexpected_Sign_Extension__fscanf_malloc_68_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a value input from the console using fscanf() */
    fscanf (stdin, "%hd", &data);
    CWE194_Unexpected_Sign_Extension__fscanf_malloc_68_badData = data;
    CWE194_Unexpected_Sign_Extension__fscanf_malloc_68b_badSink();
}