void CWE191_Integer_Underflow__int_fscanf_multiply_68b_badSink()
{
    int data = CWE191_Integer_Underflow__int_fscanf_multiply_68_badData;
    if(data < 0) /* ensure we won't have an overflow */
    {
        /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
        int result = data * 2;
        printIntLine(result);
    }
}