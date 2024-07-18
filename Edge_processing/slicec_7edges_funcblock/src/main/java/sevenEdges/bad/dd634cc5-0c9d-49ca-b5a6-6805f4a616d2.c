void CWE400_Resource_Exhaustion__connect_socket_for_loop_68b_badSink()
{
    int count = CWE400_Resource_Exhaustion__connect_socket_for_loop_68_badData;
    {
        size_t i = 0;
        /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}