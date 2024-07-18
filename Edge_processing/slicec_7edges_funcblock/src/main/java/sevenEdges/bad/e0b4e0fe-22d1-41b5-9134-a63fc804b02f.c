void CWE400_Resource_Exhaustion__fscanf_fwrite_02_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    if(1)
    {
        /* POTENTIAL FLAW: Read count from the console using fscanf() */
        fscanf(stdin, "%d", &count);
    }
    if(1)
    {
        {
            size_t i = 0;
            FILE *pFile = NULL;
            const char *filename = "output_bad.txt";
            pFile = fopen(filename, "w+");
            if (pFile == NULL)
            {
                exit(1);
            }
            /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
             * This can cause a file to become very large */
            for (i = 0; i < (size_t)count; i++)
            {
                if (strlen(SENTENCE) != fwrite(SENTENCE, sizeof(char), strlen(SENTENCE), pFile))
                {
                    exit(1);
                }
            }
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}