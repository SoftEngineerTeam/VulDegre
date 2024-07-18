void CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)malloc(sizeof(twoIntsStruct *));
            if (pointer == NULL) {exit(-1);}
            twoIntsStruct * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}