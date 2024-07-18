void CWE415_Double_Free__malloc_free_wchar_t_68_bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    CWE415_Double_Free__malloc_free_wchar_t_68_badData = data;
    CWE415_Double_Free__malloc_free_wchar_t_68b_badSink();
}