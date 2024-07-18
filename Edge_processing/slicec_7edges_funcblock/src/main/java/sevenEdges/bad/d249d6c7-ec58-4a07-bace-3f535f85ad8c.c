void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad()
{
    int data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_structType myStruct;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67b_badSink(myStruct);
}