void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_34_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_34_unionType myUnion;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char dest[50] = "";
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            strcpy(dest, data);
            printLine(data);
            free(data);
        }
    }
}