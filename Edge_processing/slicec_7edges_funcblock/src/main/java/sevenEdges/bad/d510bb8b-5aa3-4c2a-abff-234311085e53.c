void CWE457_Use_of_Uninitialized_Variable__int64_t_13_bad()
{
    int64_t data;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printLongLongLine(data);
    }
}