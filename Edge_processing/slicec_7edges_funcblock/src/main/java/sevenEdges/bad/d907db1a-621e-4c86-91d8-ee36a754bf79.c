void CWE191_Integer_Underflow__short_fscanf_multiply_08_bad()
{
    short data;
    data = 0;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
    }
    if(staticReturnsTrue())
    {
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < SHRT_MIN, this will underflow */
            short result = data * 2;
            printIntLine(result);
        }
    }
}