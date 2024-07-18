void CWE191_Integer_Underflow__char_fscanf_sub_06_bad()
{
    char data;
    data = ' ';
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}