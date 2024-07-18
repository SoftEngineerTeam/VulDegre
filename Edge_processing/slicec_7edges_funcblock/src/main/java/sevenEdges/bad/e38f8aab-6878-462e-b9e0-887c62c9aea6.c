static void badSink()
{
    float data = CWE369_Divide_by_Zero__float_connect_socket_45_badData;
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}