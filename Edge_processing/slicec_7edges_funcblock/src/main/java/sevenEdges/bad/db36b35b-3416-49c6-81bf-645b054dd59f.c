void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68b_badSink()
{
    twoIntsStruct * data = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memmove_68_badData;
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
    }
}