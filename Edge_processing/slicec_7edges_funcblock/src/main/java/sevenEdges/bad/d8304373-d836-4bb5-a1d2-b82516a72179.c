void CWE415_Double_Free__malloc_free_int_32_bad()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        int * data = *dataPtr1;
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}