void CWE415_Double_Free__malloc_free_int64_t_18_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    goto sink;
sink:
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}