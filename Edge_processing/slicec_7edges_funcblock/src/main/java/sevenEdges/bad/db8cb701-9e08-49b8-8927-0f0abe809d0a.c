void CWE191_Integer_Underflow__short_min_sub_63b_badSink(short * dataPtr)
{
    short data = *dataPtr;
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        short result = data - 1;
        printIntLine(result);
    }
}