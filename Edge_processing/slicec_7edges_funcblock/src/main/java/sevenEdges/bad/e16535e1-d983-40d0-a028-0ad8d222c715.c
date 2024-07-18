void CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_badSink(long * dataArray[])
{
    /* copy data out of dataArray */
    long * data = dataArray[2];
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}