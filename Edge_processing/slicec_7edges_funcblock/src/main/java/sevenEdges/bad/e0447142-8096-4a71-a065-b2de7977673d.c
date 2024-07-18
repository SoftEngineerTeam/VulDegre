char * CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cpy_61b_badSource(char * data)
{
    /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
    memset(data, 'A', 100-1); /* fill with 'A's */
    data[100-1] = '\0'; /* null terminate */
    return data;
}