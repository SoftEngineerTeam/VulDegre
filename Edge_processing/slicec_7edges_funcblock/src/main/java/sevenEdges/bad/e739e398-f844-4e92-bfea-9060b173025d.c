void CWE191_Integer_Underflow__short_min_postdec_34_bad()
{
    short data;
    CWE191_Integer_Underflow__short_min_postdec_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            short result = data;
            printIntLine(result);
        }
    }
}