void CWE124_Buffer_Underwrite__wchar_t_declare_loop_67_bad()
{
    wchar_t * data;
    CWE124_Buffer_Underwrite__wchar_t_declare_loop_67_structType myStruct;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    CWE124_Buffer_Underwrite__wchar_t_declare_loop_67b_badSink(myStruct);
}