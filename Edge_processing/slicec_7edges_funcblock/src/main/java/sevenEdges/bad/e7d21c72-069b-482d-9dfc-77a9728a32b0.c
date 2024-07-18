void CWE252_Unchecked_Return_Value__wchar_t_w32CreateMutex_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexW(NULL, FALSE, NULL);
            /* FLAW: Do not check the return value */
            /* We'll leave out most of the implementation since it has nothing to do with the CWE
             * and since the checkers are looking for certain function calls anyway */
            CloseHandle(hMutex);
        }
    }
}