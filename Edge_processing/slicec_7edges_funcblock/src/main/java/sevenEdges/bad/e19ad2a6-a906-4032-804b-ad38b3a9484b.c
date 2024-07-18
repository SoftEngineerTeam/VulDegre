void CWE415_Double_Free__malloc_free_wchar_t_21_bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    badStatic = 1; /* true */
    badSink(data);
}