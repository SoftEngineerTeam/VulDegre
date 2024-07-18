void CWE590_Free_Memory_Not_on_Heap__free_int_static_64b_badSink(void * dataVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * * dataPtr = (int * *)dataVoidPtr;
    /* dereference dataPtr into data */
    int * data = (*dataPtr);
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}