void CWE415_Double_Free__malloc_free_int64_t_53_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    CWE415_Double_Free__malloc_free_int64_t_53b_badSink(data);
}