void CWE415_Double_Free__malloc_free_int_42_bad()
{
    int * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}