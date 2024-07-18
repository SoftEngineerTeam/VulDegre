void CWE400_Resource_Exhaustion__fgets_sleep_22_badSink(int count)
{
    if(CWE400_Resource_Exhaustion__fgets_sleep_22_badGlobal)
    {
        /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}