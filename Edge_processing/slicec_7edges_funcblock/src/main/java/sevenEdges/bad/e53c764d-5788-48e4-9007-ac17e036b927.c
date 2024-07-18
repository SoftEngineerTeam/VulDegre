void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_bad()
{
    twoIntsStruct * data;
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badSource(data);
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
        /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
        memmove(data, source, 100*sizeof(twoIntsStruct));
        printStructLine(&data[0]);
        free(data);
    }
}