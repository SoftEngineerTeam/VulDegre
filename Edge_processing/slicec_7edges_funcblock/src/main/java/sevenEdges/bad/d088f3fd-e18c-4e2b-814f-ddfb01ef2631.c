void CWE415_Double_Free__malloc_free_long_68_bad()
{
    long * data;
    /* Initialize data */
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    CWE415_Double_Free__malloc_free_long_68_badData = data;
    CWE415_Double_Free__malloc_free_long_68b_badSink();
}