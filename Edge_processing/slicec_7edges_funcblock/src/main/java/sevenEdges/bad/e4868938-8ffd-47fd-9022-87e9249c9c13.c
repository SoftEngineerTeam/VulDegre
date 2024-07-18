char * CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_61b_badSource(char * data)
{
    /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    return data;
}