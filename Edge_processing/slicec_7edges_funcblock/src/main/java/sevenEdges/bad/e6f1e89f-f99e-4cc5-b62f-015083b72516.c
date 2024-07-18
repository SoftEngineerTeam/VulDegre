void CWE191_Integer_Underflow__char_rand_postdec_54e_badSink(char data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        char result = data;
        printHexCharLine(result);
    }
}