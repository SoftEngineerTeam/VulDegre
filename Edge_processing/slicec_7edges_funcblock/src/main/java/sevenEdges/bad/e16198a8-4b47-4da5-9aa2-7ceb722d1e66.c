void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_44_bad()
{
    unsigned int data;
    /* define a function pointer */
    void (*funcPtr) (unsigned int) = badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    /* use the function pointer */
    funcPtr(data);
}