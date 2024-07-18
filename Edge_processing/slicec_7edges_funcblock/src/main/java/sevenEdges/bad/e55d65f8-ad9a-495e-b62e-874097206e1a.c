char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_22_badSource(char * data)
{
    if(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_22_badGlobal)
    {
        /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
        memset(data, 'A', 100-1); /* fill with 'A's */
        data[100-1] = '\0'; /* null terminate */
    }
    return data;
}