void CWE400_Resource_Exhaustion__fgets_sleep_68b_badSink()
{
    int count = CWE400_Resource_Exhaustion__fgets_sleep_68_badData;
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}