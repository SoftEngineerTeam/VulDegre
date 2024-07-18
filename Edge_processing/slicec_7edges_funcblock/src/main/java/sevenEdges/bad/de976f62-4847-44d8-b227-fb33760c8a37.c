void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); /* fill with L'C's */
        source[100-1] = L'\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
        wcscpy(data, source);
        printWLine(data);
    }
}