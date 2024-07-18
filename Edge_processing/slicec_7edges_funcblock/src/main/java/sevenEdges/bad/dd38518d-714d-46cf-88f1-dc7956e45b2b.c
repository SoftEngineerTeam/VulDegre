void CWE190_Integer_Overflow__char_rand_add_64_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    CWE190_Integer_Overflow__char_rand_add_64b_badSink(&data);
}