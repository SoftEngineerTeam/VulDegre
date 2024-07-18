void CWE191_Integer_Underflow__int64_t_fscanf_postdec_65b_badSink(int64_t data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}