void CWE415_Double_Free__malloc_free_struct_34_bad()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_34_unionType myUnion;
    /* Initialize data */
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}