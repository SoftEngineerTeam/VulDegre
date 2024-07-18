static void badSink()
{
    int64_t * data = CWE590_Free_Memory_Not_on_Heap__free_int64_t_static_45_badData;
    printLongLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}