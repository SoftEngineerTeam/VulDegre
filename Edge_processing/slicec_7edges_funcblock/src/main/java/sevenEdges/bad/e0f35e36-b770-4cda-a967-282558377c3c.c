void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_21_bad()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    badStatic = 1; /* true */
    badSink(data);
}