void CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            BYTE payload[100];
            DWORD payloadLen = strlen(PAYLOAD);
            HCRYPTPROV hCryptProv = (HCRYPTPROV)NULL;
            HCRYPTHASH hHash = (HCRYPTHASH)NULL;
            HCRYPTKEY hKey = (HCRYPTKEY)NULL;
            char hashData[100] = HASH_INPUT;
            do
            {
                /* Copy plaintext into payload buffer */
                memcpy(payload, PAYLOAD, payloadLen);
                /* Aquire a Context */
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
                {
                    break;
                }
                /* FLAW: Missing required step (CryptCreateHash) causes the payload to remain in plaintext form */
                /* Hash the input string */
                if(!CryptHashData(hHash, (BYTE*)hashData, strlen(hashData), 0))
                {
                    break;
                }
                /* Derive an AES key from the hash */
                if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
                {
                    break;
                }
                /* Encrypt the payload */
                if(!CryptEncrypt(hKey, 0, 1, 0, payload, &payloadLen, sizeof(payload)))
                {
                    break;
                }
            }
            while (0);
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
            /* Do something with the encrypted data */
            printBytesLine(payload, payloadLen);
        }
    }
    else
    {
        {
            BYTE payload[100];
            DWORD payloadLen = strlen(PAYLOAD);
            HCRYPTPROV hCryptProv = (HCRYPTPROV)NULL;
            HCRYPTHASH hHash = (HCRYPTHASH)NULL;
            HCRYPTKEY hKey = (HCRYPTKEY)NULL;
            char hashData[100] = HASH_INPUT;
            do
            {
                /* Copy plaintext into payload buffer */
                memcpy(payload, PAYLOAD, payloadLen);
                /* Aquire a Context */
                if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENH_RSA_AES_PROV, PROV_RSA_AES, 0))
                {
                    break;
                }
                /* FIX: All required steps are present */
                /* Create hash handle */
                if(!CryptCreateHash(hCryptProv, CALG_SHA_256, 0, 0, &hHash))
                {
                    break;
                }
                /* Hash the input string */
                if(!CryptHashData(hHash, (BYTE*)hashData, strlen(hashData), 0))
                {
                    break;
                }
                /* Derive an AES key from the hash */
                if(!CryptDeriveKey(hCryptProv, CALG_AES_256, hHash, 0, &hKey))
                {
                    break;
                }
                /* Encrypt the payload */
                if(!CryptEncrypt(hKey, 0, 1, 0, payload, &payloadLen, sizeof(payload)))
                {
                    break;
                }
            }
            while (0);
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
            /* Do something with the encrypted data */
            printBytesLine(payload, payloadLen);
        }
    }
}