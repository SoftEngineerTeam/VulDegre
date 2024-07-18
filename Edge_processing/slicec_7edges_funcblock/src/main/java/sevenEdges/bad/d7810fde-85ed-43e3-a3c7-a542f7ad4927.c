void CWE590_Free_Memory_Not_on_Heap__free_int_declare_63b_badSink(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}