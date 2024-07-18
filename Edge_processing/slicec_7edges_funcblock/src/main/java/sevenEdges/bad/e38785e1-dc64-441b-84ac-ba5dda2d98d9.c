void CWE190_Integer_Overflow__int_fscanf_add_05_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Read data from the console using fscanf() */
        fscanf(stdin, "%d", &data);
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
    }
}