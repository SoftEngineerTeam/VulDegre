void CWE78_OS_Command_Injection__char_file_w32spawnl_67_bad()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_w32spawnl_67_structType myStruct;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        /* Read input from a file */
        size_t dataLen = strlen(data);
        FILE * pFile;
        /* if there is room in data, attempt to read the input from a file */
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                /* POTENTIAL FLAW: Read data from a file */
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    /* Restore NUL terminator if fgets fails */
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    myStruct.structFirst = data;
    CWE78_OS_Command_Injection__char_file_w32spawnl_67b_badSink(myStruct);
}