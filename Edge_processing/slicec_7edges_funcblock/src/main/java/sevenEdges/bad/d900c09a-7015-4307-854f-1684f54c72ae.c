void CWE459_Incomplete_Cleanup__wchar_t_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"badXXXXXX";
            FILE *pFile;
            /* Establish that this is a temporary file and that it should be deleted */
            filename = MKTEMP(tmpl);
            if (filename != NULL)
            {
                pFile = FOPEN(filename, L"w");
                if (pFile != NULL)
                {
                    fprintf(pFile, "Temporary file");
                    fclose(pFile);
                    /* FLAW: We don't unlink */
                }
            }
        }
    }
}