void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_09_bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    if(GLOBAL_CONST_TRUE)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            int64_t * dataBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5LL;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}