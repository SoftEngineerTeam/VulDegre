unsigned int CWE190_Integer_Overflow__unsigned_int_fscanf_add_61b_badSource(unsigned int data)
{
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%u", &data);
    return data;
}