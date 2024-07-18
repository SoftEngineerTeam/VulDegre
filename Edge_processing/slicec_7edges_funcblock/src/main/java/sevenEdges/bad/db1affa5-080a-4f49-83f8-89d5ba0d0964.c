void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_03_bad()
{
    int * data;
    data = NULL; /* Initialize data */
    if(5==5)
    {
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
    }
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}