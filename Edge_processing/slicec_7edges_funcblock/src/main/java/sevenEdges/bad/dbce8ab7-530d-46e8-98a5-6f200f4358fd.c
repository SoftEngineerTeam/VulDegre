wchar_t * CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncat_61b_badSource(wchar_t * data)
{
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    wmemset(data, L'A', 100-1); /* fill with L'A's */
    data[100-1] = L'\0'; /* null terminate */
    return data;
}