void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_bad()
{
    int64_t * data;
    data = NULL;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        int64_t source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}