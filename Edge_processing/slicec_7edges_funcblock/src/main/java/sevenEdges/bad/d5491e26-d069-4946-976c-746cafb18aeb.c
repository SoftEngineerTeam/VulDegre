void CWE191_Integer_Underflow__unsigned_int_rand_sub_66_bad()
{
    unsigned int data;
    unsigned int dataArray[5];
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (unsigned int)RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE191_Integer_Underflow__unsigned_int_rand_sub_66b_badSink(dataArray);
}