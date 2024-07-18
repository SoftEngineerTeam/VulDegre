void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_65b_badSink;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    /* use the function pointer */
    funcPtr(data);
}