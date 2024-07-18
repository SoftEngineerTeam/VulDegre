void CWE191_Integer_Underflow__short_fscanf_sub_41_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    badSink(data);
}