void CWE190_Integer_Overflow__int_fscanf_multiply_65_bad()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = CWE190_Integer_Overflow__int_fscanf_multiply_65b_badSink;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    /* use the function pointer */
    funcPtr(data);
}