void CWE476_NULL_Pointer_Dereference__struct_64_bad()
{
    twoIntsStruct * data;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    CWE476_NULL_Pointer_Dereference__struct_64b_badSink(&data);
}