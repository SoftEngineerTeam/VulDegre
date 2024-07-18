void CWE415_Double_Free__malloc_free_long_32_bad()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        long * data = *dataPtr1;
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}