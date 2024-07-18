void CWE191_Integer_Underflow__unsigned_int_fscanf_postdec_53d_badSink(unsigned int data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}