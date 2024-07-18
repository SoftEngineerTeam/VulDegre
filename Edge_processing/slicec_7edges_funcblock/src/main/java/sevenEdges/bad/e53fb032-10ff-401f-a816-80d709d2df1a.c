void CWE191_Integer_Underflow__char_fscanf_postdec_10_bad()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}