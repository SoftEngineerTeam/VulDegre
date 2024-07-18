void CWE191_Integer_Underflow__short_fscanf_postdec_02_bad()
{
    short data;
    data = 0;
    if(1)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
    }
    if(1)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}