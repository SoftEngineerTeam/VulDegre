void CWE416_Use_After_Free__malloc_free_int64_t_03_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
        free(data);
    }
    if(5==5)
    {
        /* POTENTIAL FLAW: Use of data that may have been freed */
        printLongLongLine(data[0]);
        /* POTENTIAL INCIDENTAL - Possible memory leak here if data was not freed */
    }
}