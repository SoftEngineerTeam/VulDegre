static void badSink()
{
    char * data = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memmove_45_badData;
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}