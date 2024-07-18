void CWE191_Integer_Underflow__int64_t_fscanf_postdec_67b_badSink(CWE191_Integer_Underflow__int64_t_fscanf_postdec_67_structType myStruct)
{
    int64_t data = myStruct.structFirst;
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}