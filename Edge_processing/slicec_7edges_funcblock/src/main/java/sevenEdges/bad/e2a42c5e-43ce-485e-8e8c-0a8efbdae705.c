void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_badSink(int64_t * data)
{
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}