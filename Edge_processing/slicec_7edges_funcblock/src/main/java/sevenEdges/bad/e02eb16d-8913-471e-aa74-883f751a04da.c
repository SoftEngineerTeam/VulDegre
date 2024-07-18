void CWE620_Unverified_Password_Change__w32_05_bad()
{
    if(staticTrue)
    {
        {
            wchar_t newPassword[256];
            USER_INFO_1003 myUserInfo;
            NET_API_STATUS status;
            myUserInfo.usri1003_password = newPassword;
            printWLine(L"Enter new password: ");
            if (fwscanf(stdin, L"%255s", myUserInfo.usri1003_password) != 1)
            {
                myUserInfo.usri1003_password[0] = L'\0';
            }
            /* FLAW: Set password without verifying the old one */
            status = NetUserSetInfo(NULL, USERNAME, 1003, (LPBYTE)&myUserInfo, NULL);
            if(status == NERR_Success)
            {
                printWLine(L"Success!");
            }
            else
            {
                wprintf(L"NetUserSetInfo failed.  Status = %u = 0x%x\n", status, status);
            }
        }
    }
}