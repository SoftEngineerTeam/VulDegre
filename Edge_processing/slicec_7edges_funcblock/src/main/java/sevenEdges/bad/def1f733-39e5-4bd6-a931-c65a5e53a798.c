void CWE190_Integer_Overflow__unsigned_int_fscanf_add_45_bad()
{
    unsigned int data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    CWE190_Integer_Overflow__unsigned_int_fscanf_add_45_badData = data;
    badSink();
}