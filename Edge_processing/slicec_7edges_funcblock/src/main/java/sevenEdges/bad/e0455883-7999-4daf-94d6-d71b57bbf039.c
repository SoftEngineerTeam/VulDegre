void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_66b_badSink(char * dataArray[])
{
    /* copy data out of dataArray */
    char * data = dataArray[2];
    {
        char dest[50] = "";
        /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
        strcat(dest, data);
        printLine(data);
    }
}