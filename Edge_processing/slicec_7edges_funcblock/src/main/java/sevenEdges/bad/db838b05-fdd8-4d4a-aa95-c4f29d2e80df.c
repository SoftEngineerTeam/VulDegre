char * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_61b_badSource(char * data)
{
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}