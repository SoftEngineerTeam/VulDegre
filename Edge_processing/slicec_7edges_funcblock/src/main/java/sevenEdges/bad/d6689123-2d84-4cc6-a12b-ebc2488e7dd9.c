void CWE415_Double_Free__malloc_free_int_22_badSink(int * data)
{
    if(CWE415_Double_Free__malloc_free_int_22_badGlobal)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}