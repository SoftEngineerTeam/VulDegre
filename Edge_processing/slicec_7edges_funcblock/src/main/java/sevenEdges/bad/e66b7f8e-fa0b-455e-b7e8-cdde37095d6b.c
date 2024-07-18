void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_memmove_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    {
        char * data = *dataPtr1;
        /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
         * string copies in the sinks  */
        data = dataBadBuffer;
        data[0] = '\0'; /* null terminate */
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memmove(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
        }
    }
}