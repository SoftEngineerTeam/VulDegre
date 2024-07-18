void CWE457_Use_of_Uninitialized_Variable__struct_04_bad()
{
    twoIntsStruct data;
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Don't initialize data */
        ; /* empty statement needed for some flow variants */
    }
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Use data without initializing it */
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}