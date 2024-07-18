static void badSink()
{
    char * data = CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_45_badData;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
        free(data);
    }
}