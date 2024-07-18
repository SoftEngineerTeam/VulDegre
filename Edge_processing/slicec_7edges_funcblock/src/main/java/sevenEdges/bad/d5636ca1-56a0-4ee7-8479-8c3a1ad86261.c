void CWE400_Resource_Exhaustion__fgets_sleep_61_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    count = CWE400_Resource_Exhaustion__fgets_sleep_61b_badSource(count);
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}