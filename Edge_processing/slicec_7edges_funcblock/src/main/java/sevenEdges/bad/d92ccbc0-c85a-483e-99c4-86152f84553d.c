void CWE191_Integer_Underflow__char_rand_postdec_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    char * dataPtr = (char *)dataVoidPtr;
    /* dereference dataPtr into data */
    char data = (*dataPtr);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}