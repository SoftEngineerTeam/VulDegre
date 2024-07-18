void CWE476_NULL_Pointer_Dereference__int_31_bad()
{
    int * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    {
        int * dataCopy = data;
        int * data = dataCopy;
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
    }
}