void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_45_bad()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_45_badData = data;
    badSink();
}