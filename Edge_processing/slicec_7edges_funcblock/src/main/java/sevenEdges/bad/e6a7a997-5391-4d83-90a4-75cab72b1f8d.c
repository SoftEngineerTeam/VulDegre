void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_sscanf_06_bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: swscanf() might fail, in which case the return value will be EOF (-1), but
             * we are checking to see if the return value is 0 */
            if (swscanf(SRC_STRING, L"%99s\0", data) == 0)
            {
                printLine("swscanf failed!");
            }
        }
    }
}