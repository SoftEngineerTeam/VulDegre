static void badSink()
{
    wchar_t * data = CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_connect_socket_45_badData;
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