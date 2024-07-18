void CWE590_Free_Memory_Not_on_Heap__free_char_declare_41_badSink(char * data)
{
    printLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}