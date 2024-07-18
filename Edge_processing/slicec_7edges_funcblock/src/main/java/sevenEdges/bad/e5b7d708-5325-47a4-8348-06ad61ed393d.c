void CWE506_Embedded_Malicious_Code__w32_file_attrib_created_14_bad()
{
    if(globalFive==5)
    {
        {
            FILETIME ftCreate;
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
                                &ftCreate,
                                NULL,
                                NULL) == 0)
                {
                    break;
                }
                /* adapted from http://support.microsoft.com/kb/188768 */
                qwResult = (((ULONGLONG) ftCreate.dwHighDateTime) << 32) + ftCreate.dwLowDateTime;
                /* Subtract 10 days from real creation date */
                qwResult -= 10 * _DAY;
                /* Copy result back into ftCreate */
                ftCreate.dwLowDateTime  = (DWORD)(qwResult & 0xFFFFFFFF);
                ftCreate.dwHighDateTime = (DWORD)(qwResult >> 32);
                /* FLAW: Modify the file's creation time */
                SetFileTime(hFile,
                            &ftCreate,
                            (LPFILETIME)NULL,
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