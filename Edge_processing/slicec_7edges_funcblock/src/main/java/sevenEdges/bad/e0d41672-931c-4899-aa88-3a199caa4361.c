void CWE400_Resource_Exhaustion__fscanf_sleep_52c_badSink(int count)
{
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}