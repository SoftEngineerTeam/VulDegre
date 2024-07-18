void CWE415_Double_Free__malloc_free_long_34_bad()
{
    long * data;
    CWE415_Double_Free__malloc_free_long_34_unionType myUnion;
    /* Initialize data */
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}