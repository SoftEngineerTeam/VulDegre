void CWE476_NULL_Pointer_Dereference__struct_66b_badSink(twoIntsStruct * dataArray[])
{
    /* copy data out of dataArray */
    twoIntsStruct * data = dataArray[2];
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(data->intOne);
}