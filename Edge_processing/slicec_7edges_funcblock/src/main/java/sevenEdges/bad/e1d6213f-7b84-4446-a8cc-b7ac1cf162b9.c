void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_badSink(wchar_t * data)
{
    if(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_22_badGlobal)
    {
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
}