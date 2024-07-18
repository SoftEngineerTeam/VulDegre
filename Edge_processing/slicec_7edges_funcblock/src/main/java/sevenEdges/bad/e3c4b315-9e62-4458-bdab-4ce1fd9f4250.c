void CWE252_Unchecked_Return_Value__wchar_t_fgets_18_bad()
{
    goto sink;
sink:
    {
        /* By initializing dataBuffer, we ensure this will not be the
         * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        printLine("Please enter a string: ");
        /* FLAW: Do not check the return value */
        fgetws(data, 100, stdin);
        printWLine(data);
    }
}