void CWE590_Free_Memory_Not_on_Heap__free_int_static_65_bad()
{
    int * data;
    /* define a function pointer */
    void (*funcPtr) (int *) = CWE590_Free_Memory_Not_on_Heap__free_int_static_65b_badSink;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    /* use the function pointer */
    funcPtr(data);
}