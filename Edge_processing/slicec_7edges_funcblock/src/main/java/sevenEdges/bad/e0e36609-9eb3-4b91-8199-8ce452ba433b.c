void CWE190_Integer_Overflow__unsigned_int_fscanf_add_10_bad()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%u", &data);
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}