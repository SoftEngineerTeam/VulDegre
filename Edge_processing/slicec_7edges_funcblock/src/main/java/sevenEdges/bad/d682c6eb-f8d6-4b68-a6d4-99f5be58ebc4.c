void CWE191_Integer_Underflow__int_rand_postdec_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE191_Integer_Underflow__int_rand_postdec_66b_badSink(dataArray);
}