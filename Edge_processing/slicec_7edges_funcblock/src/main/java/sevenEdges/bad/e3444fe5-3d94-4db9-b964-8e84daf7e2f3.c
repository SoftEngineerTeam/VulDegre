int CWE400_Resource_Exhaustion__rand_fwrite_61b_badSource(int count)
{
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
    return count;
}