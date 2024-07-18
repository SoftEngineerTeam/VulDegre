void CWE590_Free_Memory_Not_on_Heap__free_int_static_67b_badSink(CWE590_Free_Memory_Not_on_Heap__free_int_static_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    printIntLine(data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}