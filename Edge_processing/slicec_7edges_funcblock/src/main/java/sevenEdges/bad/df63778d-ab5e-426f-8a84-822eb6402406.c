void CWE191_Integer_Underflow__int64_t_fscanf_sub_16_bad()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%" SCNd64, &data);
        break;
    }
    while(1)
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        break;
    }
}