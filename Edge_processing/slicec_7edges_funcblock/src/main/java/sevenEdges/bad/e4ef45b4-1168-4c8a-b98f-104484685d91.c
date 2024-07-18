void CWE400_Resource_Exhaustion__rand_fwrite_45_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
    CWE400_Resource_Exhaustion__rand_fwrite_45_badData = count;
    badSink();
}