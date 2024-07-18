void CWE191_Integer_Underflow__short_fscanf_sub_34_bad()
{
    short data;
    CWE191_Integer_Underflow__short_fscanf_sub_34_unionType myUnion;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
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