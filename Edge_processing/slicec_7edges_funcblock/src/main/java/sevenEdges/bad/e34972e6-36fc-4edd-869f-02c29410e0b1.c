void CWE415_Double_Free__malloc_free_wchar_t_05_bad()
{
    wchar_t * data;
    /* Initialize data */
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}