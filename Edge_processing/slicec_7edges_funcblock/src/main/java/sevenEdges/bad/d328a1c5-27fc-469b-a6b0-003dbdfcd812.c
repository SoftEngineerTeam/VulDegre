void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fread_08_bad()
{
    if(staticReturnsTrue())
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            /* FLAW: fread() might fail, in which case the return value will not be equal to 100-1,
             * but we are checking to see if the return value is equal to 0 */
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) == 0)
            {
                printLine("fread failed!");
            }
        }
    }
}