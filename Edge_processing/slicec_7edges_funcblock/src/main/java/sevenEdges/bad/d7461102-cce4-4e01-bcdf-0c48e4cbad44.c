void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fscanf_02_bad()
{
    if(1)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: fwscanf() might fail, in which case the return value will be EOF (-1), but
             * we are checking to see if the return value is 0 */
            if (fwscanf(stdin, L"%99s\0", data) == 0)
            {
                printLine("fwscanf failed!");
            }
        }
    }
}