void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_67_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_67b_badSink(myStruct);
}