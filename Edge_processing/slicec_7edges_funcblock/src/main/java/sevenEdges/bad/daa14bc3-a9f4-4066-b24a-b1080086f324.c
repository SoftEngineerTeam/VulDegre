void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_53d_badSink(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the sizeof(data)-strlen(data) is less than the length of source */
        wcscat(data, source);
        printWLine(data);
    }
}