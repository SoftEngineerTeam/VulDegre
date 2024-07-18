void CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_61_bad()
{
    unsigned int data;
    data = 0;
    data = CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}