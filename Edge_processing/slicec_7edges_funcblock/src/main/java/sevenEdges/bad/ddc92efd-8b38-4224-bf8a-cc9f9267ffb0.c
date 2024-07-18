void CWE476_NULL_Pointer_Dereference__wchar_t_12_bad()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    else
    {
        /* FIX: Initialize data */
        data = L"Good";
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printWLine() checks for NULL, so we cannot use it here */
        printWcharLine(data[0]);
    }
    else
    {
        /* FIX: Check for NULL before attempting to print data */
        if (data != NULL)
        {
            /* printWLine() checks for NULL, so we cannot use it here */
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}