void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_63b_badSink(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    {
        /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}