void CWE415_Double_Free__malloc_free_int_01_bad()
{
    int * data;
    /* Initialize data */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}