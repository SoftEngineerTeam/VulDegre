void CWE415_Double_Free__malloc_free_wchar_t_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        wchar_t * data = *dataPtr1;
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}