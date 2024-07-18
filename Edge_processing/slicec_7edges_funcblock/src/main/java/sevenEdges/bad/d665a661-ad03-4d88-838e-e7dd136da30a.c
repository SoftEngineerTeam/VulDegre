void CWE415_Double_Free__malloc_free_long_08_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
    }
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}