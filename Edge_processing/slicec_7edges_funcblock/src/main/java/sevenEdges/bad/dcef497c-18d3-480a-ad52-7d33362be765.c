void CWE191_Integer_Underflow__int_rand_postdec_22_badSink(int data)
{
    if(CWE191_Integer_Underflow__int_rand_postdec_22_badGlobal)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}