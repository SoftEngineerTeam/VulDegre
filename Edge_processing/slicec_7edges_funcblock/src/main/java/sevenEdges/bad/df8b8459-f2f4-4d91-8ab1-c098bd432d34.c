void CWE191_Integer_Underflow__unsigned_int_min_sub_32_bad()
{
    unsigned int data;
    unsigned int *dataPtr1 = &data;
    unsigned int *dataPtr2 = &data;
    data = 0;
    {
        unsigned int data = *dataPtr1;
        /* POTENTIAL FLAW: Use the minimum size of the data type */
        data = 0;
        *dataPtr1 = data;
    }
    {
        unsigned int data = *dataPtr2;
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            unsigned int result = data - 1;
            printUnsignedLine(result);
        }
    }
}