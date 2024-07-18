void CWE191_Integer_Underflow__char_fscanf_predec_65b_badSink(char data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        char result = data;
        printHexCharLine(result);
    }
}