void CWE191_Integer_Underflow__char_fscanf_predec_22_badSink(char data)
{
    if(CWE191_Integer_Underflow__char_fscanf_predec_22_badGlobal)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            char result = data;
            printHexCharLine(result);
        }
    }
}