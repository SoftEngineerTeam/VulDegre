void CWE476_NULL_Pointer_Dereference__struct_67_bad()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_67_structType myStruct;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    myStruct.structFirst = data;
    CWE476_NULL_Pointer_Dereference__struct_67b_badSink(myStruct);
}