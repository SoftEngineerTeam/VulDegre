void CWE369_Divide_by_Zero__int_connect_socket_modulo_53d_badSink(int data)
{
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 % data);
}