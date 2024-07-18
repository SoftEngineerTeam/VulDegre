void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_68b_badSink()
{
    int64_t * data = CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_memcpy_68_badData;
    {
        int64_t source[100] = {0}; /* fill with 0's */
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}