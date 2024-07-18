void CWE476_NULL_Pointer_Dereference__struct_11_bad()
{
    twoIntsStruct * data;
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(globalReturnsTrue())
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
}