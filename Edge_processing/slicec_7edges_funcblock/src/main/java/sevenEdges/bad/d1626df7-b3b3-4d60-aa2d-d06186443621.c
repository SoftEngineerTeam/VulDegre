void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_61_bad()
{
    char * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_61b_badSource(data);
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        memcpy(data, source, 100*sizeof(char));
        data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}