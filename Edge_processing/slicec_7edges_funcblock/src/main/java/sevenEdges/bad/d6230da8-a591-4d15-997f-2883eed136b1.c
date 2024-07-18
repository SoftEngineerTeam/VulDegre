void CWE415_Double_Free__malloc_free_char_67b_badSink(CWE415_Double_Free__malloc_free_char_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}