void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_52_bad()
{
    char * data;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_52b_badSink(data);
}