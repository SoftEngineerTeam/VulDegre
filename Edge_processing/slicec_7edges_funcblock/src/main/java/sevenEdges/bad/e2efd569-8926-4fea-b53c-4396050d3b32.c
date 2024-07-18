void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_09_bad()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}