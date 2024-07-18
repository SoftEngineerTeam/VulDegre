static void badSink()
{
    int * data = CWE590_Free_Memory_Not_on_Heap__free_int_alloca_45_badData;
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}