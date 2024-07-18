void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_badSink(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    {
        twoIntsStruct source[100];
        {
            size_t i;
            /* Initialize array */
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        {
            size_t i;
            /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printStructLine(&data[0]);
            free(data);
        }
    }
}