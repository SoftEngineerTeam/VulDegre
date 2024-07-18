void CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_bad()
{
    twoIntsStruct * data;
    /* define a function pointer */
    void (*funcPtr) (twoIntsStruct *) = CWE590_Free_Memory_Not_on_Heap__free_struct_static_65b_badSink;
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
    /* use the function pointer */
    funcPtr(data);
}