void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}