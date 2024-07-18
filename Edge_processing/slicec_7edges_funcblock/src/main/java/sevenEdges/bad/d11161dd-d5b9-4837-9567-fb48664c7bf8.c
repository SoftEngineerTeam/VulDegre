void CWE415_Double_Free__malloc_free_struct_53d_badSink(twoIntsStruct * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}