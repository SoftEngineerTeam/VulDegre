void CWE415_Double_Free__malloc_free_char_66b_badSink(char * dataArray[])
{
    /* copy data out of dataArray */
    char * data = dataArray[2];
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}