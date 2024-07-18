void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68b_badSink()
{
    twoIntsStruct * data = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_badData;
    printStructLine(&data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}