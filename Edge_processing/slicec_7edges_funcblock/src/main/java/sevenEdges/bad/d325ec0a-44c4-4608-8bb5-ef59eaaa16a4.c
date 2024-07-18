void CWE416_Use_After_Free__malloc_free_int64_t_64_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
    free(data);
    CWE416_Use_After_Free__malloc_free_int64_t_64b_badSink(&data);
}