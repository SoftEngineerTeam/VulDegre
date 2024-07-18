void CWE191_Integer_Underflow__char_fscanf_sub_53_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    CWE191_Integer_Underflow__char_fscanf_sub_53b_badSink(data);
}