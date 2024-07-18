void CWE121_Stack_Based_Buffer_Overflow__CWE193_char_declare_loop_15_bad()
{
    char * data;
    char dataBadBuffer[10];
    char dataGoodBuffer[10+1];
    switch(6)
    {
    case 6:
        /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
         * string copies in the sinks  */
        data = dataBadBuffer;
        data[0] = '\0'; /* null terminate */
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        /* Copy length + 1 to include NUL terminator from source */
        /* POTENTIAL FLAW: data may not have enough space to hold source */
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}