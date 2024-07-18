void CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_64_bad()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)malloc(10*sizeof(twoIntsStruct));
    /* POTENTIAL FLAW: Don't initialize data */
    ; /* empty statement needed for some flow variants */
    CWE457_Use_of_Uninitialized_Variable__struct_array_malloc_no_init_64b_badSink(&data);
}