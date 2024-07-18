void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_06_bad()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    {
        char source[10+1] = SRC_STRING;
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}