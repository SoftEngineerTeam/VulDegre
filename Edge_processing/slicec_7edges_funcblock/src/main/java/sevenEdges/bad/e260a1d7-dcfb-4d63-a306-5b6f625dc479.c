void CWE758_Undefined_Behavior__int_malloc_use_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            int * pointer = (int *)malloc(sizeof(int));
            if (pointer == NULL) {exit(-1);}
            int data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            free(pointer);
            printIntLine(data);
        }
    }
}