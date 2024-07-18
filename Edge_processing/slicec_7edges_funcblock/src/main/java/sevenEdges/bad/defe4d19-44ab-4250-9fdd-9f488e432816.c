void CWE415_Double_Free__malloc_free_char_52c_badSink(char * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}