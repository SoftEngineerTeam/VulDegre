void CWE191_Integer_Underflow__char_fscanf_multiply_10_bad()
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
        if(data < 0) /* ensure we won't have an overflow */
        {
            /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}