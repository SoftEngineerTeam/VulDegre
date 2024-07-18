void CWE369_Divide_by_Zero__float_listenSocket_68b_badSink()
{
    float data = CWE369_Divide_by_Zero__float_listenSocket_68_badData;
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}