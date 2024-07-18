void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_ncpy_44_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = badSink;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
     * string copies in the sinks  */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    /* use the function pointer */
    funcPtr(data);
}