void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_41_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    badSink(data);
}