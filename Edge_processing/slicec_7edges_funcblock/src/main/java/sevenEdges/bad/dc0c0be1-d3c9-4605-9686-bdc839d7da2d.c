void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memcpy_17_bad()
{
    int i;
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    for(i = 0; i < 1; i++)
    {
        /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
        memset(data, 'A', 100-1); /* fill with 'A's */
        data[100-1] = '\0'; /* null terminate */
    }
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        memcpy(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}