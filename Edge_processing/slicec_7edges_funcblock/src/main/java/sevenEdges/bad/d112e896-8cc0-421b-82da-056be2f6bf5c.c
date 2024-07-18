void CWE506_Embedded_Malicious_Code__w32_file_attrib_accessed_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        {
            FILETIME ftAccess;
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
                if (!GetFileTime(hFile,
                                 NULL,
                                 &ftAccess,
                                 NULL))
                {
                    break;
                }
                /* adapted from http://support.microsoft.com/kb/188768 */
                qwResult = (((ULONGLONG) ftAccess.dwHighDateTime) << 32) + ftAccess.dwLowDateTime;
                /* Subtract 10 days from real last accesssed date */
                qwResult -= 10 * _DAY;
                /* Copy result back into ftAccess */
                ftAccess.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
                ftAccess.dwHighDateTime = (DWORD)(qwResult >> 32);
                /* FLAW: Modify the file's last accessed time */
                SetFileTime(hFile,
                            (LPFILETIME)NULL,
                            &ftAccess,
                            (LPFILETIME)NULL);
            }
            while (0);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                CloseHandle(hFile);
            }
        }
    }
}