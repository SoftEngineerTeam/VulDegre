void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_52_bad()
{
    char * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; /* null terminate */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_52b_badSink(data);
}