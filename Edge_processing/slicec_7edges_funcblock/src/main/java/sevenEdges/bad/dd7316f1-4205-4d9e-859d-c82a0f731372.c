void CWE415_Double_Free__malloc_free_char_05_bad()
{
    char * data;
    /* Initialize data */
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
    }
    if(staticTrue)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}