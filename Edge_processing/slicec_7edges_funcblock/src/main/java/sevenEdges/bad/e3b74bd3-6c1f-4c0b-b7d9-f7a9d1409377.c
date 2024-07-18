void CWE191_Integer_Underflow__char_fscanf_predec_52_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    CWE191_Integer_Underflow__char_fscanf_predec_52b_badSink(data);
}