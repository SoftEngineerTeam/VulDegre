void CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_63_bad()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    /* POTENTIAL FLAW: Don't initialize data */
    ; /* empty statement needed for some flow variants */
    CWE457_Use_of_Uninitialized_Variable__double_array_declare_no_init_63b_badSink(&data);
}