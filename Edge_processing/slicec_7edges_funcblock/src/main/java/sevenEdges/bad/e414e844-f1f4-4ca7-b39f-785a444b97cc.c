void CWE476_NULL_Pointer_Dereference__char_10_bad()
{
    char * data;
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printLine() checks for NULL, so we cannot use it here */
        printHexCharLine(data[0]);
    }
}