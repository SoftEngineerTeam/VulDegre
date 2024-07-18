void CWE191_Integer_Underflow__unsigned_int_min_postdec_21_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = 0;
    badStatic = 1; /* true */
    badSink(data);
}