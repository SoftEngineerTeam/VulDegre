void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fgets_05_bad()
{
    if(staticTrue)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            printLine("Please enter a string: ");
            /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
             * but we are checking to see if the return value is less than 0. */
            if (fgetws(data, 100, stdin) < 0)
            {
                printLine("fgetws failed!");
                exit(1);
            }
            printWLine(data);
        }
    }
}