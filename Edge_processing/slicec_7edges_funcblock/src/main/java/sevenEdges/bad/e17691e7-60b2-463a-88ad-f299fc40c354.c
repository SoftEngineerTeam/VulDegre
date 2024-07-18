void CWE190_Integer_Overflow__short_fscanf_square_65_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = CWE190_Integer_Overflow__short_fscanf_square_65b_badSink;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    /* use the function pointer */
    funcPtr(data);
}