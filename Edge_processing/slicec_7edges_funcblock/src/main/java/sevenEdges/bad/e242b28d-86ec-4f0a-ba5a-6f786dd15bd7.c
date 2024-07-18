void CWE457_Use_of_Uninitialized_Variable__struct_array_alloca_partial_init_18_bad()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    goto source;
source:
    /* POTENTIAL FLAW: Partially initialize data */
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    goto sink;
sink:
    /* POTENTIAL FLAW: Use data without initializing it */
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}