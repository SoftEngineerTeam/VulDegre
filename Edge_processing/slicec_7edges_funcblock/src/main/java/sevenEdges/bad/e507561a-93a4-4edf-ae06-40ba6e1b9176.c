void CWE191_Integer_Underflow__short_fscanf_sub_22_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    CWE191_Integer_Underflow__short_fscanf_sub_22_badGlobal = 1; /* true */
    CWE191_Integer_Underflow__short_fscanf_sub_22_badSink(data);
}