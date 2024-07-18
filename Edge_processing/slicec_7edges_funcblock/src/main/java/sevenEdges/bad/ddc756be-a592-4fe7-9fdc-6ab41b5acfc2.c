void CWE457_Use_of_Uninitialized_Variable__wchar_t_pointer_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    /* dereference dataPtr into data */
    wchar_t * data = (*dataPtr);
    /* POTENTIAL FLAW: Use data without initializing it */
    printWLine(data);
}