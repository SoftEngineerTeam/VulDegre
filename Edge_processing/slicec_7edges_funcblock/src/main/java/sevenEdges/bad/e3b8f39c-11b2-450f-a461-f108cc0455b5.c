void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65b_badSink(void * data)
{
    /* POTENTIAL FLAW: Attempt to print a struct when data may be a non-struct data type */
    printStructLine((twoIntsStruct *)data);
}