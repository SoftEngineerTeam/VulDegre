static int badSource(int count)
{
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
    return count;
}