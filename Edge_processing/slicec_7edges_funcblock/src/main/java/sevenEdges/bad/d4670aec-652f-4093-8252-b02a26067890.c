void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_bad()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
        data = (int64_t *)malloc(50*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
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
                free(data);
            }
        }
    }
}