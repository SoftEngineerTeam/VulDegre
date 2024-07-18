void CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_bad()
{
    wchar_t * data;
    data = NULL;
    CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_badGlobal = 1; /* true */
    data = CWE124_Buffer_Underwrite__malloc_wchar_t_cpy_22_badSource(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with 'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
        wcscpy(data, source);
        printWLine(data);
        /* INCIDENTAL CWE-401: Memory Leak - data may not point to location
         * returned by malloc() so can't safely call free() on it */
    }
}