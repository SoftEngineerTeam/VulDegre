void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63b_badSink(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
    }
}