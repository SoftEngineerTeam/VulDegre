void CWE457_Use_of_Uninitialized_Variable__double_08_bad()
{
    double data;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printDoubleLine(data);
    }
}