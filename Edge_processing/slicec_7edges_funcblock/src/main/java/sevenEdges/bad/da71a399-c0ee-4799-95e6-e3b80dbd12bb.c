void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_67_bad()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_67_structType myStruct;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    data[0] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_memmove_67b_badSink(myStruct);
}