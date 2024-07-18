void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_41_bad()
{
    char * password;
    /* Initialize Data */
    password = "";
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
    /* FLAW: Do not lock the memory */
    /* INCIDENTAL FLAW: CWE-259 Hardcoded Password */
    strcpy(password, "Password1234!");
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_41_badSink(password);
}