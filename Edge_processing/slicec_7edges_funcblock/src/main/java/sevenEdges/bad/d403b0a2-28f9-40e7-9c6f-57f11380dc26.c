void CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_13_bad()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}