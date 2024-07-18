void CWE415_Double_Free__malloc_free_wchar_t_66_bad()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    /* Initialize data */
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    /* put data in array */
    dataArray[2] = data;
    CWE415_Double_Free__malloc_free_wchar_t_66b_badSink(dataArray);
}