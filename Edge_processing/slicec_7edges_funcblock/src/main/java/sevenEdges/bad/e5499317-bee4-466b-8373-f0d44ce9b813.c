int CWE400_Resource_Exhaustion__fscanf_sleep_61b_badSource(int count)
{
    /* POTENTIAL FLAW: Read count from the console using fscanf() */
    fscanf(stdin, "%d", &count);
    return count;
}