void CWE476_NULL_Pointer_Dereference__int64_t_06_bad()
{
    int64_t * data;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}