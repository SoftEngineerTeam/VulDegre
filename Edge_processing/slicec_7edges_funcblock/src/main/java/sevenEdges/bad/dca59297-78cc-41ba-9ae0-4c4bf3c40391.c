char * CWE127_Buffer_Underread__malloc_char_loop_22_badSource(char * data)
{
    if(CWE127_Buffer_Underread__malloc_char_loop_22_badGlobal)
    {
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            /* FLAW: Set data pointer to before the allocated memory buffer */
            data = dataBuffer - 8;
        }
    }
    return data;
}