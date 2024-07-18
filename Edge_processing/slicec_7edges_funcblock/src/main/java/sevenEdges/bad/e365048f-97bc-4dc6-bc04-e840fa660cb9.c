void CWE253_Incorrect_Check_of_Function_Return_Value__char_fscanf_16_bad()
{
    while(1)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            /* FLAW: fscanf() might fail, in which case the return value will be EOF (-1), but
             * we are checking to see if the return value is 0 */
            if (fscanf(stdin, "%99s\0", data) == 0)
            {
                printLine("fscanf failed!");
            }
        }
        break;
    }
}