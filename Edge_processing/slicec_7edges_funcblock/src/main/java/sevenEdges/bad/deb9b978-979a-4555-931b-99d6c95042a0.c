void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_sscanf_15_bad()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}