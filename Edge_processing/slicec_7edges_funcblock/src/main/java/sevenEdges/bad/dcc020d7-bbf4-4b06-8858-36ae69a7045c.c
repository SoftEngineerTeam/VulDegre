void CWE590_Free_Memory_Not_on_Heap__free_char_alloca_53d_badSink(char * data)
{
    printLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}