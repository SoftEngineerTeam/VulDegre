void CWE190_Integer_Overflow__int64_t_fscanf_add_52c_badSink(int64_t data)
{
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}