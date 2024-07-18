static void badSink()
{
    char * data = CWE122_Heap_Based_Buffer_Overflow__c_dest_char_cat_45_badData;
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
        strcat(data, source);
        printLine(data);
        free(data);
    }
}