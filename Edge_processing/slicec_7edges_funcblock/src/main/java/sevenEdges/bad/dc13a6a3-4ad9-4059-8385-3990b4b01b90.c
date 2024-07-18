void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_34_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_loop_34_unionType myUnion;
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
            size_t i, dataLen;
            dataLen = strlen(data);
            /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
            for (i = 0; i < dataLen; i++)
            {
                dest[i] = data[i];
            }
            dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
            printLine(data);
            free(data);
        }
    }
}