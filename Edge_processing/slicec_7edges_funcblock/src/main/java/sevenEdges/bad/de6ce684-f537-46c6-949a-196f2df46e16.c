void CWE191_Integer_Underflow__char_fscanf_postdec_21_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    badStatic = 1; /* true */
    badSink(data);
}