void CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67_bad()
{
    wchar_t * data;
    CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67_structType myStruct;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    CWE127_Buffer_Underread__wchar_t_alloca_ncpy_67b_badSink(myStruct);
}