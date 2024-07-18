void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_67_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_67_structType myStruct;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_cpy_67b_badSink(myStruct);
}