void CWE590_Free_Memory_Not_on_Heap__free_int_alloca_54e_badSink(int * data)
{
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}