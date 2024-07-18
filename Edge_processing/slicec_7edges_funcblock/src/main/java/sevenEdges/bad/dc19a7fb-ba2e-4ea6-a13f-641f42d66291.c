void CWE590_Free_Memory_Not_on_Heap__free_int64_t_alloca_66b_badSink(int64_t * dataArray[])
{
    /* copy data out of dataArray */
    int64_t * data = dataArray[2];
    printLongLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}