void CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_ncpy_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strncpy(dest, data, strlen(data));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}