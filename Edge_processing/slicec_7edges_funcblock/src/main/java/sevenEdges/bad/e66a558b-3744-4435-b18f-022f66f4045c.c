void CWE400_Resource_Exhaustion__fscanf_fwrite_64_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    /* POTENTIAL FLAW: Read count from the console using fscanf() */
    fscanf(stdin, "%d", &count);
    CWE400_Resource_Exhaustion__fscanf_fwrite_64b_badSink(&count);
}