void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_declare_05_bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    if(staticTrue)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            wchar_t dataBuffer[100];
            wmemset(dataBuffer, L'A', 100-1); /* fill with 'A's */
            dataBuffer[100-1] = L'\0'; /* null terminate */
            data = dataBuffer;
        }
    }
    printWLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    free(data);
}