void CWE191_Integer_Underflow__int_rand_multiply_22_badSink(int data)
{
    if(CWE191_Integer_Underflow__int_rand_multiply_22_badGlobal)
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
            int result = data * 2;
            printIntLine(result);
        }
    }
}