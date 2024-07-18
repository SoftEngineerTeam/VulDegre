void CWE400_Resource_Exhaustion__rand_fwrite_16_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    while(1)
    {
        /* POTENTIAL FLAW: Set count to a random value */
        count = RAND32();
        break;
    }
    while(1)
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
        break;
    }
}