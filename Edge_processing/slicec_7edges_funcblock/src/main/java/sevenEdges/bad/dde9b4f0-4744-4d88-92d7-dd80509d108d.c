void CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_loop_63b_badSink(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    {
        int64_t source[100] = {0}; /* fill with 0's */
        {
            size_t i;
            /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
        }
    }
}