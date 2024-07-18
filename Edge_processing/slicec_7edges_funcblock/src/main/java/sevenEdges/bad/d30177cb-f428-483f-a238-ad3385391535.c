void CWE252_Unchecked_Return_Value__wchar_t_snprintf_15_bad()
{
    switch(6)
    {
    case 6:
    {
        /* By initializing dataBuffer, we ensure this will not be the
         * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgetws() and other variants */
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        /* FLAW: Do not check the return value */
        SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}