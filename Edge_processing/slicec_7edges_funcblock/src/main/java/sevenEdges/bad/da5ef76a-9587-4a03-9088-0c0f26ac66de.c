void CWE190_Integer_Overflow__char_rand_square_63_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    CWE190_Integer_Overflow__char_rand_square_63b_badSink(&data);
}