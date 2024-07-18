void CWE476_NULL_Pointer_Dereference__long_07_bad()
{
    long * data;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLine(*data);
    }
}