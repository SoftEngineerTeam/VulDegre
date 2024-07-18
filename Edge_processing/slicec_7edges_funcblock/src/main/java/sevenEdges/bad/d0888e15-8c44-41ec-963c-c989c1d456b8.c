void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_21_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    badStatic = 1; /* true */
    data = badSource(data);
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
    }
}