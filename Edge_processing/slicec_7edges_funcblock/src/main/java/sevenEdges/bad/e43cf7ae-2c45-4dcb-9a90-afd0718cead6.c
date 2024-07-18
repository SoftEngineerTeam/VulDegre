void CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_65_bad()
{
    twoIntsStruct * data;
    /* define a function pointer */
    void (*funcPtr) (twoIntsStruct *) = CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_alloca_memcpy_65b_badSink;
    twoIntsStruct * dataBadBuffer = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * dataGoodBuffer = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    /* use the function pointer */
    funcPtr(data);
}