void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_61_bad()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_snprintf_61b_badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
    }
}