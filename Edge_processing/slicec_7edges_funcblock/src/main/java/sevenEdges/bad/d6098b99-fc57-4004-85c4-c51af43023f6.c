char * CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_22_badSource(char * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_22_badGlobal)
    {
        /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; /* null terminate */
    }
    return data;
}