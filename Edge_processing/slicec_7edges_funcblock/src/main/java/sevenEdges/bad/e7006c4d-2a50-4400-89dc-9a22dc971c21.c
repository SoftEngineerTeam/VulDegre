void CWE415_Double_Free__malloc_free_char_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        char * data = *dataPtr1;
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}