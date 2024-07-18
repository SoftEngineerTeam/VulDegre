void CWE476_NULL_Pointer_Dereference__char_22_badSink(char * data)
{
    if(CWE476_NULL_Pointer_Dereference__char_22_badGlobal)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        /* printLine() checks for NULL, so we cannot use it here */
        printHexCharLine(data[0]);
    }
}