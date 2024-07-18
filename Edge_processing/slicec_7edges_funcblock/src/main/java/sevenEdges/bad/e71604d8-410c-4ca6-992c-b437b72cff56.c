void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_66_bad()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; /* null terminate */
    /* put data in array */
    dataArray[2] = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_snprintf_66b_badSink(dataArray);
}