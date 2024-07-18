void CWE457_Use_of_Uninitialized_Variable__int64_t_05_bad()
{
    int64_t data;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printLongLongLine(data);
    }
}