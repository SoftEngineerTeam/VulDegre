void CWE127_Buffer_Underread__wchar_t_declare_ncpy_68b_badSink()
{
    wchar_t * data = CWE127_Buffer_Underread__wchar_t_declare_ncpy_68_badData;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); /* fill with 'C's */
        dest[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
        wcsncpy(dest, data, wcslen(dest));
        /* Ensure null termination */
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}