void CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_bad()
{
    twoIntsStruct * data;
    CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_structType myStruct;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static twoIntsStruct dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    CWE590_Free_Memory_Not_on_Heap__free_struct_static_67b_badSink(myStruct);
}