void CWE327_Use_Broken_Crypto__w32_RC5_18_bad()
{
    goto sink;
sink:
    {
        FILE *pFile;
        HCRYPTPROV hCryptProv;
        HCRYPTKEY hKey;
        HCRYPTHASH hHash;
        char password[100];
        size_t passwordLen;
        char toBeDecrypted[100];
        DWORD toBeDecryptedLen = sizeof(toBeDecrypted)-1;
        /* Read the password from the console */
        printLine("Enter the password: ");
        if (fgets(password, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            /* Restore NUL terminator if fgets fails */
            password[0] = '\0';
        }
        /* The next 3 lines remove the carriage return from the string that is
         * inserted by fgets() */
        passwordLen = strlen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = '\0';
        }
        /* Read the data to be decrypted from a file */
        pFile = fopen("encrypted.txt", "rb");
        if (pFile == NULL)
        {
            exit(1);
        }
        if (fread(toBeDecrypted, sizeof(char), 100, pFile) != 100)
        {
            fclose(pFile);
            exit(1);
        }
        toBeDecrypted[99] = '\0';
        /* Try to get a context with and without a new key set */
        if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
        {
            if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, CRYPT_NEWKEYSET))
            {
                printLine("Error in acquiring cryptographic context");
                exit(1);
            }
        }
        /* Create Hash handle */
        if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
        {
            printLine("Error in creating hash");
            exit(1);
        }
        /* Hash the password */
        if(!CryptHashData(hHash, (BYTE *) password, passwordLen, 0))
        {
            printLine("Error in hashing password");
            exit(1);
        }
        /* Derive a RC5 key from the Hashed password */
        if(!CryptDeriveKey(hCryptProv, CALG_RC5, hHash, 0, &hKey))
        {
            printLine("Error in CryptDeriveKey");
            exit(1);
        }
        /* FLAW: Decrypt using RC5 */
        if(!CryptDecrypt(hKey, 0, 1, 0, (BYTE *)toBeDecrypted, &toBeDecryptedLen))
        {
            printLine("Error in decryption");
            exit(1);
        }
        /* Ensure the plaintext is NUL-terminated */
        toBeDecrypted[toBeDecryptedLen] = '\0';
        printLine(toBeDecrypted);
        /* Cleanup */
        if (hKey)
        {
            CryptDestroyKey(hKey);
        }
        if (hHash)
        {
            CryptDestroyHash(hHash);
        }
        if (hCryptProv)
        {
            CryptReleaseContext(hCryptProv, 0);
        }
        if (pFile)
        {
            fclose(pFile);
        }
    }
}