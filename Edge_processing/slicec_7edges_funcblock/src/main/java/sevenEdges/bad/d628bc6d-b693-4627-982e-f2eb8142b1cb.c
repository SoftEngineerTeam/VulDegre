void CWE476_NULL_Pointer_Dereference__long_03_bad()
{
    long * data;
    if(5==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLine(*data);
    }
}