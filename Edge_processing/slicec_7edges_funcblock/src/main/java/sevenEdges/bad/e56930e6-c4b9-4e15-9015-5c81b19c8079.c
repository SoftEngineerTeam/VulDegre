void CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_63_bad()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    /* POTENTIAL FLAW: Partially initialize data */
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
    CWE457_Use_of_Uninitialized_Variable__double_array_malloc_partial_init_63b_badSink(&data);
}