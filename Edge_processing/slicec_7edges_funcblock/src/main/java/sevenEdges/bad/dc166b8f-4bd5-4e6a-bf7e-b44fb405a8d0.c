int64_t CWE191_Integer_Underflow__int64_t_fscanf_sub_61b_badSource(int64_t data)
{
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%" SCNd64, &data);
    return data;
}