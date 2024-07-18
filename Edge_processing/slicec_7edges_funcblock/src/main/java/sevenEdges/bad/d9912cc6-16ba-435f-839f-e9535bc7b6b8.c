void CWE758_Undefined_Behavior__int_pointer_malloc_use_05_bad()
{
    if(staticTrue)
    {
        {
            int * * pointer = (int * *)malloc(sizeof(int *));
            if (pointer == NULL) {exit(-1);}
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printIntLine(*data);
        }
    }
}