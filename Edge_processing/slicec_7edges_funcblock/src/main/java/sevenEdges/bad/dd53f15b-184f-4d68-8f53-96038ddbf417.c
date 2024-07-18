void CWE191_Integer_Underflow__short_min_sub_34_bad()
{
    short data;
    CWE191_Integer_Underflow__short_min_sub_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use the minimum size of the data type */
    data = SHRT_MIN;
    myUnion.unionFirst = data;
    {
        short data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            short result = data - 1;
            printIntLine(result);
        }
    }
}