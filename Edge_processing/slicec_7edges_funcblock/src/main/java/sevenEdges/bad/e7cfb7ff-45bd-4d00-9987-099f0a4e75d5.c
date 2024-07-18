void CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    CWE191_Integer_Underflow__unsigned_int_fscanf_sub_53b_badSink(data);
}