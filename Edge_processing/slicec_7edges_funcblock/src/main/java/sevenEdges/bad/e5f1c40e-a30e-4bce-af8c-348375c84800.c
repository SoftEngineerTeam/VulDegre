void CWE415_Double_Free__malloc_free_long_65b_badSink(long * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}