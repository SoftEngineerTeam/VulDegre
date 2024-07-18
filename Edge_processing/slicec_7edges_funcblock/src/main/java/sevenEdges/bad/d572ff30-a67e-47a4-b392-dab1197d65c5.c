void CWE191_Integer_Underflow__char_rand_postdec_66_bad()
{
    char data;
    char dataArray[5];
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE191_Integer_Underflow__char_rand_postdec_66b_badSink(dataArray);
}