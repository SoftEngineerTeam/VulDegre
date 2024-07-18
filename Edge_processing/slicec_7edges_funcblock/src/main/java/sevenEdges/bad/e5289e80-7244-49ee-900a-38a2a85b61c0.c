void CWE476_NULL_Pointer_Dereference__int64_t_05_bad()
{
    int64_t * data;
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}