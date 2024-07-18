void CWE190_Integer_Overflow__int_connect_socket_add_52c_badSink(int data)
{
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int result = data + 1;
        printIntLine(result);
    }
}