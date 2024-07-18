void CWE369_Divide_by_Zero__float_listenSocket_63b_badSink(float * dataPtr)
{
    float data = *dataPtr;
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}