void CWE457_Use_of_Uninitialized_Variable__int_array_malloc_no_init_12_bad()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    else
    {
        /* FIX: Completely initialize data */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(globalReturnsTrueOrFalse())
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
    else
    {
        /* FIX: Ensure data is initialized before use */
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}