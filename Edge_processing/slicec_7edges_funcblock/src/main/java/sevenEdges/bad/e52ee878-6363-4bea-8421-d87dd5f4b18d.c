void CWE190_Integer_Overflow__int_listen_socket_add_68b_badSink()
{
    int data = CWE190_Integer_Overflow__int_listen_socket_add_68_badData;
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int result = data + 1;
        printIntLine(result);
    }
}