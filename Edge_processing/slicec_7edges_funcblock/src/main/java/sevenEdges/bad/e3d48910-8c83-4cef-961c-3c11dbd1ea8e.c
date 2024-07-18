void CWE126_Buffer_Overread__malloc_char_loop_22_bad()
{
    char * data;
    data = NULL;
    CWE126_Buffer_Overread__malloc_char_loop_22_badGlobal = 1; /* true */
    data = CWE126_Buffer_Overread__malloc_char_loop_22_badSource(data);
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; /* null terminate */
        destLen = strlen(dest);
        /* POTENTIAL FLAW: using length of the dest where data
         * could be smaller than dest causing buffer overread */
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}