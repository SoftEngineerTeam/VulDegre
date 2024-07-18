char * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_61b_badSource(char * data)
{
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0'; /* null terminate */
    return data;
}