static void badSink()
{
    twoIntsStruct * data = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_badData;
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printStructLine(data);
    free(data);
}