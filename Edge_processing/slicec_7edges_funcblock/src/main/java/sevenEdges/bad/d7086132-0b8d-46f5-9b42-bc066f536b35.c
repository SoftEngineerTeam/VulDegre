void CWE415_Double_Free__malloc_free_struct_22_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    CWE415_Double_Free__malloc_free_struct_22_badGlobal = 1; /* true */
    CWE415_Double_Free__malloc_free_struct_22_badSink(data);
}