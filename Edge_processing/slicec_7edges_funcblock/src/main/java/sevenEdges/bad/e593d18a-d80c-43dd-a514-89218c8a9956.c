void CWE476_NULL_Pointer_Dereference__int_17_bad()
{
    int i,j;
    int * data;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
    }
}