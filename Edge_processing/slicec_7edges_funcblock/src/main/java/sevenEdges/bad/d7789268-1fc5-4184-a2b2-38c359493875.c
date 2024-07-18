void CWE191_Integer_Underflow__int64_t_fscanf_sub_08_bad()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
            int64_t result = data - 1;
            printLongLongLine(result);
        }
    }
}