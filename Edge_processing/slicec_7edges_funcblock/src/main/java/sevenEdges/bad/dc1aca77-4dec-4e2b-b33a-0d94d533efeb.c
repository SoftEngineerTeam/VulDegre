void CWE457_Use_of_Uninitialized_Variable__double_05_bad()
{
    double data;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printDoubleLine(data);
    }
}