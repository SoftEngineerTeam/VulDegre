void CWE191_Integer_Underflow__int64_t_fscanf_postdec_05_bad()
{
    int64_t data;
    data = 0LL;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticTrue)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}