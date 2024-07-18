void CWE191_Integer_Underflow__int_min_postdec_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * dataPtr = (int *)dataVoidPtr;
    /* dereference dataPtr into data */
    int data = (*dataPtr);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int result = data;
        printIntLine(result);
    }
}