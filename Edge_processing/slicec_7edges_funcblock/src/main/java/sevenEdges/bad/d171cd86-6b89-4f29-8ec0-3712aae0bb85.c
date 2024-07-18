void CWE415_Double_Free__malloc_free_int64_t_32_bad()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}