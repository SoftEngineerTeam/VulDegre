void CWE476_NULL_Pointer_Dereference__struct_13_bad()
{
    twoIntsStruct * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
}