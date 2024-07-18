char * CWE321_Hard_Coded_Cryptographic_Key__w32_char_61b_badSource(char * cryptoKey)
{
    /* FLAW: Use a hardcoded value for the hash input causing a hardcoded crypto key in the sink */
    strcpy(cryptoKey, CRYPTO_KEY);
    return cryptoKey;
}