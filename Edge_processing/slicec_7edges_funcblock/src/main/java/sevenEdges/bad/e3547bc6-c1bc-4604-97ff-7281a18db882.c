void CWE191_Integer_Underflow__char_fscanf_predec_68b_badSink()
{
    char data = CWE191_Integer_Underflow__char_fscanf_predec_68_badData;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        char result = data;
        printHexCharLine(result);
    }
}