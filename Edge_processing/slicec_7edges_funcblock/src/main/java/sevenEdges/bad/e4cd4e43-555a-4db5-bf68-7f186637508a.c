void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_32_bad()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    {
        char * data = *dataPtr1;
        /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
        strcpy(data, BAD_SOURCE_FIXED_STRING);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
         * memory block not at the start of the buffer */
        for (; *data != '\0'; data++)
        {
            if (*data == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}