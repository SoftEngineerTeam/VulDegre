void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_65b_badSink(int64_t * data)
{
    printLongLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}