void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_alloca_31_bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1); /* fill with 'A's */
        dataBuffer[100-1] = L'\0'; /* null terminate */
        data = dataBuffer;
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        printWLine(data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        free(data);
    }
}