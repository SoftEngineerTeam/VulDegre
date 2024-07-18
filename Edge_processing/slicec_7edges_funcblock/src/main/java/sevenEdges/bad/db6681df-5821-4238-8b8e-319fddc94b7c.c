void CWE506_Embedded_Malicious_Code__w32_file_attrib_modified_08_bad()
{
    if(staticReturnsTrue())
    {
        {
            FILETIME ftModified;
            ULONGLONG qwResult;
            HANDLE hFile = INVALID_HANDLE_VALUE;
            do
            {
                hFile = CreateFile(TEXT("badFile.txt"),
                                   GENERIC_READ | GENERIC_WRITE, /* needed for SetFileTime to work properly */
                                   0,
                                   NULL,
                                   CREATE_ALWAYS,
                                   FILE_ATTRIBUTE_NORMAL, NULL);
                if (hFile == INVALID_HANDLE_VALUE)
                {
                    break;
                }
                if (GetFileTime(hFile,
                                NULL,
                                NULL,
                                &ftModified) == 0)
                {
                    break;
                }
                /* adapted from http://support.microsoft.com/kb/188768 */
                qwResult = (((ULONGLONG) ftModified.dwHighDateTime) << 32) + ftModified.dwLowDateTime;
                /* Subtract 10 days from real last modified date */
                qwResult -= 10 * _DAY;
                /* Copy result back into ftModified */
                ftModified.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
                ftModified.dwHighDateTime = (DWORD)(qwResult >> 32);
                /* FLAW: Modify the file's last modified time */
                SetFileTime(hFile,
                            (LPFILETIME)NULL,
                            (LPFILETIME)NULL,
                            &ftModified);
            }
            while (0);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
        }
    }
}