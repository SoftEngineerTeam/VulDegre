void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_42_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data = badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
    }
}