void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_bad()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    /* put data in array */
    dataArray[2] = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_badSink(dataArray);
}