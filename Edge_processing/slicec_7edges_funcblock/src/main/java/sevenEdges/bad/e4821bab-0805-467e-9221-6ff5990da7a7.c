void CWE400_Resource_Exhaustion__rand_sleep_63b_badSink(int * countPtr)
{
    int count = *countPtr;
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}