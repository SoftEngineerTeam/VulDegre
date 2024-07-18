void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_68b_badSink()
{
    char * data = CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_68_badData;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
        free(data);
    }
}