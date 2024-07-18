void CWE457_Use_of_Uninitialized_Variable__int_array_declare_no_init_11_bad()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(globalReturnsTrue())
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