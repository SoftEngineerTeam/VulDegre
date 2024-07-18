void CWE190_Integer_Overflow__char_fscanf_multiply_07_bad()
{
    char data;
    data = ' ';
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%c", &data);
    }
    if(staticFive==5)
    {
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}