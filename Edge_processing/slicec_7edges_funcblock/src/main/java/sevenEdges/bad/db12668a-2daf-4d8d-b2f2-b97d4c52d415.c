void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_21_bad()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    badStatic = 1; /* true */
    badSink(data);
}