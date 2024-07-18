void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_66_bad()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    /* put data in array */
    dataArray[2] = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_66b_badSink(dataArray);
}