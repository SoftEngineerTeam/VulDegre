void CWE190_Integer_Overflow__short_fscanf_square_64_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    CWE190_Integer_Overflow__short_fscanf_square_64b_badSink(&data);
}