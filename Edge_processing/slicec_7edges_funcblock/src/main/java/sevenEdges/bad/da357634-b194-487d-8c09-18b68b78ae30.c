void CWE415_Double_Free__malloc_free_int64_t_66_bad()
{
    int64_t * data;
    int64_t * dataArray[5];
    /* Initialize data */
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    /* put data in array */
    dataArray[2] = data;
    CWE415_Double_Free__malloc_free_int64_t_66b_badSink(dataArray);
}