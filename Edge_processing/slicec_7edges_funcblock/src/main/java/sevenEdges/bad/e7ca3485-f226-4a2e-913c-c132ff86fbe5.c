void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memmove_44_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = badSink;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    /* use the function pointer */
    funcPtr(data);
}