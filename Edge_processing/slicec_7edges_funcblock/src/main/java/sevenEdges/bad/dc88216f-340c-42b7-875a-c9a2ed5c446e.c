void CWE190_Integer_Overflow__short_max_add_15_bad()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = SHRT_MAX;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        short result = data + 1;
        printIntLine(result);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}