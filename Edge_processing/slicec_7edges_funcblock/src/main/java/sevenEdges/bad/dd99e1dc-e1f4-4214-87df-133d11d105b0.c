void CWE590_Free_Memory_Not_on_Heap__free_char_alloca_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE590_Free_Memory_Not_on_Heap__free_char_alloca_65b_badSink;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1); /* fill with 'A's */
        dataBuffer[100-1] = '\0'; /* null terminate */
        data = dataBuffer;
    }
    /* use the function pointer */
    funcPtr(data);
}