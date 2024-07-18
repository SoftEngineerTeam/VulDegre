void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        /* FLAW: Did not leave space for a null terminator */
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            strncpy(data, source, strlen(source) + 1);
            printLine(data);
            free(data);
        }
    }
}