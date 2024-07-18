void CWE590_Free_Memory_Not_on_Heap__free_char_static_51_bad()
{
    char * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); /* fill with 'A's */
        dataBuffer[100-1] = '\0'; /* null terminate */
        data = dataBuffer;
    }
    CWE590_Free_Memory_Not_on_Heap__free_char_static_51b_badSink(data);
}