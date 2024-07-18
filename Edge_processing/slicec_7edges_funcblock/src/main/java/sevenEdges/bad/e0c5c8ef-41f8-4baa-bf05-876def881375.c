void CWE415_Double_Free__malloc_free_struct_67_bad()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_67_structType myStruct;
    /* Initialize data */
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    /* POTENTIAL FLAW: Free data in the source - the bad sink frees data as well */
    free(data);
    myStruct.structFirst = data;
    CWE415_Double_Free__malloc_free_struct_67b_badSink(myStruct);
}