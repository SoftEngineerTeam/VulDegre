void CWE190_Integer_Overflow__int64_t_fscanf_add_65_bad()
{
    int64_t data;
    /* define a function pointer */
    void (*funcPtr) (int64_t) = CWE190_Integer_Overflow__int64_t_fscanf_add_65b_badSink;
    data = 0LL;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%lld", &data);
    /* use the function pointer */
    funcPtr(data);
}