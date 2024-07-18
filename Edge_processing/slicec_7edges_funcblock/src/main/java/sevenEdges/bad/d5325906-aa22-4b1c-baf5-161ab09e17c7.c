void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53d_badSink(twoIntsStruct * data)
{
    printStructLine(&data[0]);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}