void CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_68_bad()
{
    wchar_t * cryptoKey;
    wchar_t cryptoKeyBuffer[100] = L"";
    cryptoKey = cryptoKeyBuffer;
    /* FLAW: Use a hardcoded value for the hash input causing a hardcoded crypto key in the sink */
    wcscpy(cryptoKey, CRYPTO_KEY);
    CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_68_badData = cryptoKey;
    CWE321_Hard_Coded_Cryptographic_Key__w32_wchar_t_68b_badSink();
}