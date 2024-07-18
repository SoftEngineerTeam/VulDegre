void CWE377_Insecure_Temporary_File__wchar_t_tempnam_15_bad()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * filename;
        int fileDesc;
        filename = TEMPNAM(NULL, NULL);
        if (filename == NULL)
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
        free(filename);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}