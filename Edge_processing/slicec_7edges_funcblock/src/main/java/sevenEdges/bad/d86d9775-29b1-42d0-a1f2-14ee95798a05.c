void CWE124_Buffer_Underwrite__wchar_t_alloca_memmove_31_bad()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    /* FLAW: Set data pointer to before the allocated memory buffer */
    data = dataBuffer - 8;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); /* fill with 'C's */
            source[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
            memmove(data, source, 100*sizeof(wchar_t));
            /* Ensure the destination buffer is null terminated */
            data[100-1] = L'\0';
            printWLine(data);
        }
    }
}