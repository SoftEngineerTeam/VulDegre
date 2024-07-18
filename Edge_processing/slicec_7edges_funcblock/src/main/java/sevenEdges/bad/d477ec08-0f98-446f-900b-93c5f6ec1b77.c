void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE126_Buffer_Overread__malloc_wchar_t_memcpy_65b_badSink;
    data = NULL;
    /* FLAW: Use a small buffer */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); /* fill with 'A's */
    data[50-1] = L'\0'; /* null terminate */
    /* use the function pointer */
    funcPtr(data);
}