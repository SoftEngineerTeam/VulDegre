void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_alloca_52c_badSink(wchar_t * data)
{
    printWLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}