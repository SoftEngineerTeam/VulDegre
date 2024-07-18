void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_66_bad()
{
    char * data;
    char * dataArray[5];
    data = (char *)malloc(100*sizeof(char));
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    /* put data in array */
    dataArray[2] = data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_66b_badSink(dataArray);
}