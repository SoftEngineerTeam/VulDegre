void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_08_bad()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(staticReturnsTrue())
    {
        /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
        memset(data, 'A', 100-1); /* fill with 'A's */
        data[100-1] = '\0'; /* null terminate */
    }
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
    }
}