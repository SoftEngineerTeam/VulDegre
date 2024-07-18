void CWE457_Use_of_Uninitialized_Variable__double_pointer_11_bad()
{
    double * data;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printDoubleLine(*data);
    }
}