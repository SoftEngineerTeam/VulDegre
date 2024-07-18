void CWE590_Free_Memory_Not_on_Heap__free_int_static_32_bad()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL; /* Initialize data */
    {
        int * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        printIntLine(data[0]);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        free(data);
    }
}