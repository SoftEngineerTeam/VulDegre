void CWE415_Double_Free__malloc_free_struct_16_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    while(1)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
        free(data);
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
        break;
    }
}