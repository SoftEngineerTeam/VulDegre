void CWE190_Integer_Overflow__unsigned_int_fscanf_add_63b_badSink(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}