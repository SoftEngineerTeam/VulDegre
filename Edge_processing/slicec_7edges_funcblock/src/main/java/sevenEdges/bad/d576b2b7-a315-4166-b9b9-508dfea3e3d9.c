void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badGlobal = 1; /* true */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badSink(data);
}