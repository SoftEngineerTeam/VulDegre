void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_bad()
{
    char * data;
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badSource(data);
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        SNPRINTF(data, 100, "%s", source);
        printLine(data);
        free(data);
    }
}