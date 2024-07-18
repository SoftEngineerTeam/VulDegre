void CWE190_Integer_Overflow__short_fscanf_square_32_bad()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%hd", &data);
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
            /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
            short result = data * data;
            printIntLine(result);
        }
    }
}