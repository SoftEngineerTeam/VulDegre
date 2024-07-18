void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_61_bad()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_61b_badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memcpy(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}