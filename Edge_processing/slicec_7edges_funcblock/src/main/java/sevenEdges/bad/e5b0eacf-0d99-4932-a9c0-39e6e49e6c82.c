void CWE415_Double_Free__malloc_free_long_18_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    goto sink;
sink:
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}