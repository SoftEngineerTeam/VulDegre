void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncpy_65b_badSink;
    char dataBuffer[100];
    data = dataBuffer;
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    /* use the function pointer */
    funcPtr(data);
}