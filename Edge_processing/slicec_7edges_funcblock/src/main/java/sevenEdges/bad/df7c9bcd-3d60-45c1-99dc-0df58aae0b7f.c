void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_66_bad()
{
    char * data;
    char * dataArray[5];
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    /* put data in array */
    dataArray[2] = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_66b_badSink(dataArray);
}