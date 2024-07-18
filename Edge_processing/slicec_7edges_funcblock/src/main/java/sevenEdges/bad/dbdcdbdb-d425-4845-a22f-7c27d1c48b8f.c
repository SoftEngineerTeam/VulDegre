void CWE127_Buffer_Underread__wchar_t_declare_loop_32_bad()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    {
        wchar_t * data = *dataPtr1;
        /* FLAW: Set data pointer to before the allocated memory buffer */
        data = dataBuffer - 8;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            size_t i;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); /* fill with 'C's */
            dest[100-1] = L'\0'; /* null terminate */
            /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            /* Ensure null termination */
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}