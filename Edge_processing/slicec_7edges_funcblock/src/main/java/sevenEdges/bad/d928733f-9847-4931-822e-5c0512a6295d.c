char * CWE126_Buffer_Overread__malloc_char_memmove_22_badSource(char * data)
{
    if(CWE126_Buffer_Overread__malloc_char_memmove_22_badGlobal)
    {
        /* FLAW: Use a small buffer */
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 50-1); /* fill with 'A's */
        data[50-1] = '\0'; /* null terminate */
    }
    return data;
}