void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_41_bad()
{
    char * data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_41_badSink(data);
}