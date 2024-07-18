void CWE476_NULL_Pointer_Dereference__int64_t_09_bad()
{
    int64_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(GLOBAL_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printLongLongLine(*data);
    }
}