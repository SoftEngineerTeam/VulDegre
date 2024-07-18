void CWE253_Incorrect_Check_of_Function_Return_Value__char_snprintf_03_bad()
{
    if(5==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* FLAW: snprintf() might fail, in which case the return value will be negative, but
             * we are checking to see if the return value is 0 */
            if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) == 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}