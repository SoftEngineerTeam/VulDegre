void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_snprintf_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: swprintf() might fail, in which case the return value will be negative, but
             * we are checking to see if the return value is 0 */
            if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) == 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}