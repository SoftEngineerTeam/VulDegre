void CWE415_Double_Free__malloc_free_long_31_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    {
        long * dataCopy = data;
        long * data = dataCopy;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}