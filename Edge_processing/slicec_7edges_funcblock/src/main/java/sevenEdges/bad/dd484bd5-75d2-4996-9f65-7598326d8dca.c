void CWE416_Use_After_Free__malloc_free_wchar_t_63_bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
    free(data);
    CWE416_Use_After_Free__malloc_free_wchar_t_63b_badSink(&data);
}