void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_badSink(int64_t data)
{
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}