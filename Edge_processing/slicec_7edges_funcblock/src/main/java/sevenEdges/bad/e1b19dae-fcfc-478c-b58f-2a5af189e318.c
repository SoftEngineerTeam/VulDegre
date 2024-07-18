void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_63_bad()
{
    wchar_t * data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        static wchar_t dataBuffer[100];
        wmemset(dataBuffer, L'A', 100-1); /* fill with 'A's */
        dataBuffer[100-1] = L'\0'; /* null terminate */
        data = dataBuffer;
    }
    CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_63b_badSink(&data);
}