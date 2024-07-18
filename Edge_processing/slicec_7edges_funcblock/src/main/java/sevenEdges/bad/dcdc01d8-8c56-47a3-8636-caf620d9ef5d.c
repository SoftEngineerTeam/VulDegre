void CWE190_Integer_Overflow__char_fscanf_square_22_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    CWE190_Integer_Overflow__char_fscanf_square_22_badGlobal = 1; /* true */
    CWE190_Integer_Overflow__char_fscanf_square_22_badSink(data);
}