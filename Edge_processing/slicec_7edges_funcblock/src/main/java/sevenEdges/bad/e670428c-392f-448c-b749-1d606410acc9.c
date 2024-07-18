void CWE457_Use_of_Uninitialized_Variable__double_array_alloca_no_init_10_bad()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(globalTrue)
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