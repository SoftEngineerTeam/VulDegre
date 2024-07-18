void CWE457_Use_of_Uninitialized_Variable__int_02_bad()
{
    int data;
    if(1)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(1)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data);
    }
}