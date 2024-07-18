static void badSink()
{
    wchar_t * data = CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_alloca_cpy_45_badData;
    {
        wchar_t dest[50] = L"";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        wcscpy(dest, data);
        printWLine(data);
    }
}