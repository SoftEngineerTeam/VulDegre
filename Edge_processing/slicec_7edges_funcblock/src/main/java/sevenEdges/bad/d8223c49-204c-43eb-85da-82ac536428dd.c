void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_bad()
{
    int * data;
    CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67_structType myStruct;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        int * dataBuffer = (int *)ALLOCA(100*sizeof(int));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    CWE590_Free_Memory_Not_on_Heap__free_int_alloca_67b_badSink(myStruct);
}