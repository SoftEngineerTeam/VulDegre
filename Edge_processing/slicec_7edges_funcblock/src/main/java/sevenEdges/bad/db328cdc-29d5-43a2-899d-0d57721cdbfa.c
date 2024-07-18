void CWE126_Buffer_Overread__CWE170_char_strncpy_14_bad()
{
    if(globalFive==5)
    {
        {
            char data[150], dest[100];
            /* Initialize data */
            memset(data, 'A', 149);
            data[149] = '\0';
            /* strncpy() does not null terminate if the string in the src buffer is larger than
             * the number of characters being copied to the dest buffer */
            strncpy(dest, data, 99);
            /* FLAW: do not explicitly null terminate dest after the use of strncpy() */
            printLine(dest);
        }
    }
}