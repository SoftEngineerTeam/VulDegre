void CWE457_Use_of_Uninitialized_Variable__double_pointer_04_bad()
{
    double * data;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printDoubleLine(*data);
    }
}