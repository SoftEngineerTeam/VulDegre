void CWE369_Divide_by_Zero__int_listen_socket_modulo_52c_badSink(int data)
{
    /* POTENTIAL FLAW: Possibly divide by zero */
    printIntLine(100 % data);
}