void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_51_bad()
{
    wchar_t * data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_51b_badSink(data);
}