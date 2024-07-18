void CWE400_Resource_Exhaustion__connect_socket_sleep_66b_badSink(int countArray[])
{
    /* copy count out of countArray */
    int count = countArray[2];
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}