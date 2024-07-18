void CWE190_Integer_Overflow__int_rand_multiply_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    /* put data in array */
    dataArray[2] = data;
    CWE190_Integer_Overflow__int_rand_multiply_66b_badSink(dataArray);
}