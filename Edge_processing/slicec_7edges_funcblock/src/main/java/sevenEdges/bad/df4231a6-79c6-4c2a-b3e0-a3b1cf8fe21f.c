void CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_34_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cpy_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0'; /* null terminate */
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[100];
            memset(source, 'C', 100-1); /* fill with 'C's */
            source[100-1] = '\0'; /* null terminate */
            /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
            strcpy(data, source);
            printLine(data);
            free(data);
        }
    }
}