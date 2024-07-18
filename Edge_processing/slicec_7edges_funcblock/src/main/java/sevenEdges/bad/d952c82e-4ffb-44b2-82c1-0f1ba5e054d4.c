void CWE415_Double_Free__malloc_free_char_68b_badSink()
{
    char * data = CWE415_Double_Free__malloc_free_char_68_badData;
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}