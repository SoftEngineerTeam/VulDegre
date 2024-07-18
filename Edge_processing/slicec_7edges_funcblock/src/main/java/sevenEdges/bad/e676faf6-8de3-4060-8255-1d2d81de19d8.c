void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_bad()
{
    int64_t * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_badSource(data);
    {
        int64_t source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}