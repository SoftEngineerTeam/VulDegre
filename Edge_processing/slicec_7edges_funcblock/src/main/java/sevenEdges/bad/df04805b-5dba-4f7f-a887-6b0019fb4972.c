void CWE377_Insecure_Temporary_File__wchar_t_w32GetTempFileName_07_bad()
{
    if(staticFive==5)
    {
        {
            wchar_t filename[MAX_PATH] = L"";
            int fileDesc;
            /* FLAW: Passing 0 in for uUnique tells GetTempFileName to create and then close the file,
            * leading to an inescapable race condition when we try to open it again. */
            if (GetTempFileNameW(L".", L"bad", 0, filename) == 0)
            {
                exit(1);
            }
            printWLine(filename);
            /* FLAW: Open a temporary file using open() and flags that do not prevent a race condition */
            fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
}