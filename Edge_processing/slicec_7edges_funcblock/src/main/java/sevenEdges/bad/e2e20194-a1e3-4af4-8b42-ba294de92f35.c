void CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_08_bad()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
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