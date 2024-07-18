void CWE415_Double_Free__malloc_free_long_42_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}