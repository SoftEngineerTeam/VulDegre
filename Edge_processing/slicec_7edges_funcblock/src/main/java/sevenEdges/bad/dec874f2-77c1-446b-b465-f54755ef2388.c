void CWE590_Free_Memory_Not_on_Heap__free_int_static_68b_badSink()
{
    int * data = CWE590_Free_Memory_Not_on_Heap__free_int_static_68_badData;
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}