void CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_ncpy_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    {
        wchar_t * data = *dataPtr1;
        /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
         * string copies in the sinks  */
        data = dataBadBuffer;
        data[0] = L'\0'; /* null terminate */
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            wcsncpy(data, source, wcslen(source) + 1);
            printWLine(data);
        }
    }
}