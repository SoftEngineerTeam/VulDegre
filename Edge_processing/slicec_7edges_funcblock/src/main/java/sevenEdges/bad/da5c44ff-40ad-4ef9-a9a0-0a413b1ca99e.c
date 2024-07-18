void CWE369_Divide_by_Zero__float_connect_socket_65b_badSink(float data)
{
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}