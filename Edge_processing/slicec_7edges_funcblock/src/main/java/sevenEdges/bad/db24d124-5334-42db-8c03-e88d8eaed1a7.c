void CWE191_Integer_Underflow__int_connect_socket_postdec_65b_badSink(int data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int result = data;
        printIntLine(result);
    }
}