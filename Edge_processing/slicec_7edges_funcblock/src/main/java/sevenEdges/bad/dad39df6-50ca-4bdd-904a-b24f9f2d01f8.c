void CWE253_Incorrect_Check_of_Function_Return_Value__char_fread_16_bad()
{
    while(1)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* FLAW: fread() might fail, in which case the return value will not be equal to 100-1,
             * but we are checking to see if the return value is equal to 0 */
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) == 0)
            {
                printLine("fread failed!");
            }
        }
        break;
    }
}