void CWE191_Integer_Underflow__short_fscanf_postdec_10_bad()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}