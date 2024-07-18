void CWE459_Incomplete_Cleanup__char_03_bad()
{
    if(5==5)
    {
        {
            char filename[] = "badXXXXXX";
            FILE *pFile;
            /* Establish that this is a temporary file and that it should be deleted */
            int fileDesc = MKSTEMP(filename);
            if (fileDesc != -1)
            {
                pFile = FDOPEN(fileDesc, "w");
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