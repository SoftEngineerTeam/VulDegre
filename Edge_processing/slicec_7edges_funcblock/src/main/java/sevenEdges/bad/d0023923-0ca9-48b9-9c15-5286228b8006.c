void CWE590_Free_Memory_Not_on_Heap__free_char_static_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL; /* Initialize data */
    {
        char * data = *dataPtr1;
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static char dataBuffer[100];
            memset(dataBuffer, 'A', 100-1); /* fill with 'A's */
            dataBuffer[100-1] = '\0'; /* null terminate */
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        printLine(data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        free(data);
    }
}