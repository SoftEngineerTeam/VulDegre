void CWE191_Integer_Underflow__int64_t_fscanf_sub_68_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%lld", &data);
    CWE191_Integer_Underflow__int64_t_fscanf_sub_68_badData = data;
    CWE191_Integer_Underflow__int64_t_fscanf_sub_68b_badSink();
}