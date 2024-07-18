void CWE590_Free_Memory_Not_on_Heap__free_char_declare_06_bad()
{
    char * data;
    data = NULL; /* Initialize data */
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char dataBuffer[100];
            memset(dataBuffer, 'A', 100-1); /* fill with 'A's */
            dataBuffer[100-1] = '\0'; /* null terminate */
            data = dataBuffer;
        }
    }
    printLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}