void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_memcpy_65b_badSink;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    /* use the function pointer */
    funcPtr(data);
}