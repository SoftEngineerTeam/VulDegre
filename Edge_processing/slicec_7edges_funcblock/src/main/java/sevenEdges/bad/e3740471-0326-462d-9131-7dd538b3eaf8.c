void CWE194_Unexpected_Sign_Extension__fscanf_malloc_54_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a value input from the console using fscanf() */
    fscanf (stdin, "%hd", &data);
    CWE194_Unexpected_Sign_Extension__fscanf_malloc_54b_badSink(data);
}