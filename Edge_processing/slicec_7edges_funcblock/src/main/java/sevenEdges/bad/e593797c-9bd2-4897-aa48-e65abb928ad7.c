void CWE190_Integer_Overflow__short_fscanf_square_52_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    CWE190_Integer_Overflow__short_fscanf_square_52b_badSink(data);
}