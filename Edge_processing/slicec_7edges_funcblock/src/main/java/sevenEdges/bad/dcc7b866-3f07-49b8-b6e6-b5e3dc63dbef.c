void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_22_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_22_badGlobal = 1; /* true */
    data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_ncat_22_badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strncat(dest, data, strlen(data));
        dest[50-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
    }
}