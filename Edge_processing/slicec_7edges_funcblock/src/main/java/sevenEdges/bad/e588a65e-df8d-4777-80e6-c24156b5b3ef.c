static void badSink()
{
    int data = CWE191_Integer_Underflow__int_rand_postdec_45_badData;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int result = data;
        printIntLine(result);
    }
}