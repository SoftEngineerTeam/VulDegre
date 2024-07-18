void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_41_badSink(long * data)
{
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}