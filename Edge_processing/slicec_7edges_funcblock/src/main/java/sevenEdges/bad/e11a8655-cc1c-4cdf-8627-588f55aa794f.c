void CWE191_Integer_Underflow__unsigned_int_min_postdec_13_bad()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = 0;
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