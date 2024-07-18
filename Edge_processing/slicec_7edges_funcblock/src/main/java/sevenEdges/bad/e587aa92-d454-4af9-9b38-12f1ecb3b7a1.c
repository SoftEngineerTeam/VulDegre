void CWE415_Double_Free__malloc_free_int64_t_66b_badSink(int64_t * dataArray[])
{
    /* copy data out of dataArray */
    int64_t * data = dataArray[2];
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}