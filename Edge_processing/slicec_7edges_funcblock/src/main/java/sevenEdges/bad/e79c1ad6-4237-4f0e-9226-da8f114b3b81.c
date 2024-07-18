void CWE758_Undefined_Behavior__struct_malloc_use_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
            if (pointer == NULL) {exit(-1);}
            twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}