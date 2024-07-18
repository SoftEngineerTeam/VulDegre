void CWE590_Free_Memory_Not_on_Heap__free_long_alloca_67b_badSink(CWE590_Free_Memory_Not_on_Heap__free_long_alloca_67_structType myStruct)
{
    long * data = myStruct.structFirst;
    printLongLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}