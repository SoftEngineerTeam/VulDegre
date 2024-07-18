void CWE191_Integer_Underflow__int_fscanf_multiply_51_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    CWE191_Integer_Underflow__int_fscanf_multiply_51b_badSink(data);
}