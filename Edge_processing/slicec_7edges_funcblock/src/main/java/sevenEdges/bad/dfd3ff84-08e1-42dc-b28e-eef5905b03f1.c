void CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_bad()
{
    wchar_t * data;
    CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType myStruct;
    data = NULL;
    /* FLAW: Use a small buffer */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); /* fill with 'A's */
    data[50-1] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE126_Buffer_Overread__malloc_wchar_t_memmove_67b_badSink(myStruct);
}