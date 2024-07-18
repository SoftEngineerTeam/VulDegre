void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_bad()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_structType myStruct;
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_badSink(myStruct);
}