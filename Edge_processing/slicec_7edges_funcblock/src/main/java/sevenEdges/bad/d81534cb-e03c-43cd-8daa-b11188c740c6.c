void CWE191_Integer_Underflow__char_fscanf_predec_05_bad()
{
    char data;
    data = ' ';
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}