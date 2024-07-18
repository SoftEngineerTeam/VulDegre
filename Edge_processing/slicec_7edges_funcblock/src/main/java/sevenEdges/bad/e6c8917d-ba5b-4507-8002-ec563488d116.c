void CWE190_Integer_Overflow__unsigned_int_fscanf_add_17_bad()
{
    int i,j;
    unsigned int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}