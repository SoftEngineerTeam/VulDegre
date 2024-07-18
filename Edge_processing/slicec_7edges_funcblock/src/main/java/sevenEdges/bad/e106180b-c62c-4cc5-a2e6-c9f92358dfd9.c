void CWE415_Double_Free__malloc_free_struct_07_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    if(staticFive==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
    }
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}