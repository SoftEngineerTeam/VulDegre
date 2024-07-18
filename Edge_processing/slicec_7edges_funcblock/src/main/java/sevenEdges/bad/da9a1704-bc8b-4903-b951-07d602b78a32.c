void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_bad()
{
    twoIntsStruct * data;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_badSink(data);
}