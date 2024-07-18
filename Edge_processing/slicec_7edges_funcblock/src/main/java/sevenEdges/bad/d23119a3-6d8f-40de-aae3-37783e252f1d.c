void CWE758_Undefined_Behavior__int_pointer_alloca_use_14_bad()
{
    if(globalFive==5)
    {
        {
            int * * pointer = (int * *)ALLOCA(sizeof(int *));
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(*data);
        }
    }
}