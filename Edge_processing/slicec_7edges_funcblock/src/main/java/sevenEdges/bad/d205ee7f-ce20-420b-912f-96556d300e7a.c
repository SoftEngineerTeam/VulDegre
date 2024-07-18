void CWE190_Integer_Overflow__short_fscanf_square_15_bad()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
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
        /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
        short result = data * data;
        printIntLine(result);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}