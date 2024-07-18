twoIntsStruct * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61b_badSource(twoIntsStruct * data)
{
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    return data;
}