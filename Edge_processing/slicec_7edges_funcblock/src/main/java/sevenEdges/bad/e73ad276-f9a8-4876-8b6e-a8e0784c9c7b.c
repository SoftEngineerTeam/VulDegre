void CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_63_bad()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    /* POTENTIAL FLAW: Partially initialize data */
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = i;
        }
    }
    CWE457_Use_of_Uninitialized_Variable__int_array_declare_partial_init_63b_badSink(&data);
}