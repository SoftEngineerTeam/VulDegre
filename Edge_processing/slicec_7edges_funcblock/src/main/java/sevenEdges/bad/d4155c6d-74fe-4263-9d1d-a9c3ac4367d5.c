void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_bad()
{
    char * data;
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_22_badSource(data);
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}