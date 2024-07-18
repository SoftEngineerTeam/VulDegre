void CWE190_Integer_Overflow__short_rand_add_05_bad()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use a random value */
        data = (short)RAND32();
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            short result = data + 1;
            printIntLine(result);
        }
    }
}