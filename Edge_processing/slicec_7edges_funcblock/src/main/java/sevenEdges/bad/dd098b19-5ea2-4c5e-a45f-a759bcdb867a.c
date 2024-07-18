void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_badSink(double * data)
{
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printDoubleLine(*data);
    free(data);
}