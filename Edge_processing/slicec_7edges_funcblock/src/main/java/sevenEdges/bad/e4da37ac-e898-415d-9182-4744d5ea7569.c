void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_68_bad()
{
    wchar_t * data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_68_badData = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_ncpy_68b_badSink();
}