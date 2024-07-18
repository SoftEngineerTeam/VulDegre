void CWE126_Buffer_Overread__wchar_t_declare_loop_15_bad()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    wmemset(dataBadBuffer, L'A', 50-1); /* fill with 'A's */
    dataBadBuffer[50-1] = L'\0'; /* null terminate */
    wmemset(dataGoodBuffer, L'A', 100-1); /* fill with 'A's */
    dataGoodBuffer[100-1] = L'\0'; /* null terminate */
    switch(6)
    {
    case 6:
        /* FLAW: Set data pointer to a small buffer */
        data = dataBadBuffer;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; /* null terminate */
        destLen = wcslen(dest);
        /* POTENTIAL FLAW: using length of the dest where data
         * could be smaller than dest causing buffer overread */
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}