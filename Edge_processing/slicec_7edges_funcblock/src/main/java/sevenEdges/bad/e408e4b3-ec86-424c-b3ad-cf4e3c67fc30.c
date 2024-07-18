void CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_51_bad()
{
    wchar_t * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    data[0] = L'\0'; /* null terminate */
    CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cat_51b_badSink(data);
}