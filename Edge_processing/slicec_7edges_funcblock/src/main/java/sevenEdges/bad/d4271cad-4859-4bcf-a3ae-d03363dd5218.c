void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_06_bad()
{
    unsigned int data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}