void CWE506_Embedded_Malicious_Code__w32_base64_encoded_payload_15_bad()
{
    switch(6)
    {
    case 6:
    {
        /* FLAW: encoded "calc.exe" */
        char * encodedPayload = "Y2FsYy5leGU=";
        BYTE * decodedPayload = NULL;
        DWORD requiredLength;
        do
        {
            /* Calculate the number of bytes needed to decode */
            if (!CryptStringToBinaryA(encodedPayload,
                                      strlen(encodedPayload),
                                      CRYPT_STRING_BASE64,
                                      NULL,
                                      &requiredLength,
                                      NULL,
                                      NULL))
            {
                break;
            }
            /* Allocate memory for the decoded message */
            decodedPayload = (BYTE*) malloc(requiredLength + 1);
            if (decodedPayload == NULL)
            {
                break;
            }
            /* Decode */
            if (!CryptStringToBinaryA(encodedPayload,
                                      strlen(encodedPayload),
                                      CRYPT_STRING_BASE64,
                                      decodedPayload,
                                      &requiredLength,
                                      NULL,
                                      NULL))
            {
                break;
            }
            /* NULL terminate */
            decodedPayload[requiredLength] = '\0';
            if (system((char*)decodedPayload) <= 0)
            {
                printLine("command execution failed!");
                exit(1);
            }
        }
        while (0);
        free(decodedPayload);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}