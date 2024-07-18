void CWE400_Resource_Exhaustion__rand_sleep_44_bad()
{
    int count;
    /* define a function pointer */
    void (*funcPtr) (int) = badSink;
    /* Initialize count */
    count = -1;
    /* POTENTIAL FLAW: Set count to a random value */
    count = RAND32();
    /* use the function pointer */
    funcPtr(count);
}