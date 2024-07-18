static void badSink()
{
    long * data = CWE590_Free_Memory_Not_on_Heap__free_long_alloca_45_badData;
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}