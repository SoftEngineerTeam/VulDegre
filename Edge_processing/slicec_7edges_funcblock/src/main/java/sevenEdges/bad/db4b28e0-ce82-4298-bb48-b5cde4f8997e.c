void CWE415_Double_Free__malloc_free_int_66_bad()
{
    int * data;
    int * dataArray[5];
    /* Initialize data */
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    /* put data in array */
    dataArray[2] = data;
    CWE415_Double_Free__malloc_free_int_66b_badSink(dataArray);
}