void CWE476_NULL_Pointer_Dereference__int_16_bad()
{
    int * data;
    while(1)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
        break;
    }
}