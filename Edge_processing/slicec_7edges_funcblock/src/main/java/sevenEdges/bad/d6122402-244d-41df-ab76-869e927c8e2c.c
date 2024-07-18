void CWE590_Free_Memory_Not_on_Heap__free_long_declare_07_bad()
{
    long * data;
    data = NULL; /* Initialize data */
    if(staticFive==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            long dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5L;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}