void CWE369_Divide_by_Zero__float_fscanf_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    float * dataPtr = (float *)dataVoidPtr;
    /* dereference dataPtr into data */
    float data = (*dataPtr);
    {
        /* POTENTIAL FLAW: Possibly divide by zero */
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}