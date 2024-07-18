void CWE190_Integer_Overflow__int_fscanf_multiply_41_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    badSink(data);
}