void CWE127_Buffer_Underread__char_alloca_cpy_65_bad()
{
    char * data;
    /* define a function pointer */
    void (*funcPtr) (char *) = CWE127_Buffer_Underread__char_alloca_cpy_65b_badSink;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    /* use the function pointer */
    funcPtr(data);
}