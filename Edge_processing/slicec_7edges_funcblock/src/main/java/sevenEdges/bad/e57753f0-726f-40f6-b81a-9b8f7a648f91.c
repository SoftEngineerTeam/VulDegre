void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        strcpy(dest, data);
        printLine(data);
        free(data);
    }
}