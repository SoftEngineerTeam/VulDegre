void CWE415_Double_Free__malloc_free_long_03_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}