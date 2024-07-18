void CWE191_Integer_Underflow__int_min_postdec_34_bad()
{
    int data;
    CWE191_Integer_Underflow__int_min_postdec_34_unionType myUnion;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}