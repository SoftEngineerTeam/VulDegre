void CWE415_Double_Free__malloc_free_char_44_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = badSink;
    /* Initialize data */
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    /* use the function pointer */
    funcPtr(data);
}