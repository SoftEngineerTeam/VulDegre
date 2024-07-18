void CWE415_Double_Free__malloc_free_wchar_t_22_badSink(wchar_t * data)
{
    if(CWE415_Double_Free__malloc_free_wchar_t_22_badGlobal)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}