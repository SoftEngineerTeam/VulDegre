void CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_10_bad()
{
    int64_t * data;
    data = NULL; /* Initialize data */
    if(globalTrue)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static int64_t dataBuffer[100];
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