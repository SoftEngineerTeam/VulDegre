void CWE615_Info_Exposure_by_Comment__w32_15_bad()
{
    switch(6)
    {
    case 6:
    {
        size_t passwordLen = 0;
        HANDLE hUser;
        char * domain = "Domain";
        /* Use the password in LogonUser() to establish that it is "sensitive" */
        if (LogonUserA(
                    USERNAME,
                    domain,
                    PASSWORD,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &hUser) != 0)
        {
            /* FLAW: expose username and password in comment*/
            /* Logged in XXXXX Smith using password ABCD1234 */
            printLine("User logged in successfully" );
            CloseHandle(hUser);
        }
        else
        {
            printLine("Unable to login.");
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}