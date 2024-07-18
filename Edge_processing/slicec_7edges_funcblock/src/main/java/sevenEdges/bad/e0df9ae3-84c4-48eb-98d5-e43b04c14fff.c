void CWE476_NULL_Pointer_Dereference__wchar_t_22_badSink(wchar_t * data)
{
    if(CWE476_NULL_Pointer_Dereference__wchar_t_22_badGlobal)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printWLine() checks for NULL, so we cannot use it here */
        printWcharLine(data[0]);
    }
}