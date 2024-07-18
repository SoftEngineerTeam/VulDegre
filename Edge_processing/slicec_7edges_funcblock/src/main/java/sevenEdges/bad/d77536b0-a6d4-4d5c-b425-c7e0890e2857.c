void CWE476_NULL_Pointer_Dereference__int_14_bad()
{
    int * data;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
    }
}