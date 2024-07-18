void CWE415_Double_Free__malloc_free_char_42_bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}