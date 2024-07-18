void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67b_badSink(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
     * memory block not at the start of the buffer */
    for (; *data != L'\0'; data++)
    {
        if (*data == SEARCH_CHAR)
        {
            printLine("We have a match!");
            break;
        }
    }
    free(data);
}