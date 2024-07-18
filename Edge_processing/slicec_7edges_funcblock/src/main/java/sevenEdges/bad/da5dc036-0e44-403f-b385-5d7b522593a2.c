void CWE415_Double_Free__malloc_free_wchar_t_53d_badSink(wchar_t * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}