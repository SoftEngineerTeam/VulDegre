void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_18_bad()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    goto sink;
sink:
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > UINT_MAX, this will overflow */
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}