void CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_63_bad()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    /* POTENTIAL FLAW: Don't initialize data */
    ; /* empty statement needed for some flow variants */
    CWE457_Use_of_Uninitialized_Variable__int_array_alloca_no_init_63b_badSink(&data);
}