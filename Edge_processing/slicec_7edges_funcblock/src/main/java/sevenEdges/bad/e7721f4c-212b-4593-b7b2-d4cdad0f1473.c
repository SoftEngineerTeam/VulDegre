void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char source[10+1] = SRC_STRING;
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        strcpy(data, source);
        printLine(data);
        free(data);
    }
}