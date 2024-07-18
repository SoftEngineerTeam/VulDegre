void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_badSink(twoIntsStruct * dataArray[])
{
    /* copy data out of dataArray */
    twoIntsStruct * data = dataArray[2];
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printStructLine(data);
    free(data);
}