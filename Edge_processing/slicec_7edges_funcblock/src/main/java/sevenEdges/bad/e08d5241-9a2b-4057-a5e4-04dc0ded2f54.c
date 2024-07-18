void CWE190_Integer_Overflow__short_fscanf_add_63b_badSink(short * dataPtr)
{
    short data = *dataPtr;
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        short result = data + 1;
        printIntLine(result);
    }
}