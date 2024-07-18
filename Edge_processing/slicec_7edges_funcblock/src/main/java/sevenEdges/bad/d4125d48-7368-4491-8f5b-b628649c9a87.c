void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_65_bad()
{
    wchar_t * data;
    /* define a function pointer */
    void (*funcPtr) (wchar_t *) = CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_65b_badSink;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0';
    /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    /* use the function pointer */
    funcPtr(data);
}