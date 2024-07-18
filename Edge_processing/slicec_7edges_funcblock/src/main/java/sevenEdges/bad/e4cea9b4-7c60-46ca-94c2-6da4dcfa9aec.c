void CWE476_NULL_Pointer_Dereference__wchar_t_11_bad()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printWLine() checks for NULL, so we cannot use it here */
        printWcharLine(data[0]);
    }
}