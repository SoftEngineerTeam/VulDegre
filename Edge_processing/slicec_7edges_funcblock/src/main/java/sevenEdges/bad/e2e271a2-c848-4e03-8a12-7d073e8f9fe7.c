void CWE457_Use_of_Uninitialized_Variable__double_array_alloca_partial_init_08_bad()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Partially initialize data */
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}