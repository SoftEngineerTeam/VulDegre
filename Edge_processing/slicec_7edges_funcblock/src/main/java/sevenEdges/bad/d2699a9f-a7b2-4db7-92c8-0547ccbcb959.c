void CWE415_Double_Free__malloc_free_long_61_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = CWE415_Double_Free__malloc_free_long_61b_badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}