void CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_68_bad()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_68_badData = data;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_68b_badSink();
}