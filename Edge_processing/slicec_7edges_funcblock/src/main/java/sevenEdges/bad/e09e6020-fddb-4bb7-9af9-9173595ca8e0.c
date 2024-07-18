void CWE190_Integer_Overflow__short_fscanf_add_67_bad()
{
    short data;
    CWE190_Integer_Overflow__short_fscanf_add_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    myStruct.structFirst = data;
    CWE190_Integer_Overflow__short_fscanf_add_67b_badSink(myStruct);
}