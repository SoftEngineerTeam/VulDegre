void CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_21_bad()
{
    wchar_t * data;
    data = NULL;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with 'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
        wcsncpy(data, source, 100-1);
        /* Ensure the destination buffer is null terminated */
        data[100-1] = L'\0';
        printWLine(data);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by malloc() so can't safely call free() on it */
    }
}