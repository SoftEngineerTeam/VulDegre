void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_68b_badSink()
{
    wchar_t * data = CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_68_badData;
    printWLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}