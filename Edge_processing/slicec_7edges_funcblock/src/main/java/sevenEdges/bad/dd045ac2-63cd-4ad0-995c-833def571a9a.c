void CWE191_Integer_Underflow__short_fscanf_multiply_22_badSink(short data)
{
    if(CWE191_Integer_Underflow__short_fscanf_multiply_22_badGlobal)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
            short result = data * 2;
            printIntLine(result);
        }
    }
}