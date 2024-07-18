void CWE124_Buffer_Underwrite__wchar_t_alloca_cpy_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE124_Buffer_Underwrite__wchar_t_alloca_cpy_65b_badSink;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    /* use the function pointer */
    funcPtr(data);
}