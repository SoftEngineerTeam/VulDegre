void CWE476_NULL_Pointer_Dereference__struct_22_badSink(twoIntsStruct * data)
{
    if(CWE476_NULL_Pointer_Dereference__struct_22_badGlobal)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
}