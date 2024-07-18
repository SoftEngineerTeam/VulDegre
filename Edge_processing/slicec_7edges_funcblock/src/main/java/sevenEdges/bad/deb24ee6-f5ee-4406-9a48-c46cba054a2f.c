void CWE253_Incorrect_Check_of_Function_Return_Value__char_fgets_14_bad()
{
    if(globalFive==5)
    {
        {
            /* By initializing dataBuffer, we ensure this will not be the
             * CWE 690 (Unchecked Return Value To NULL Pointer) flaw for fgets() and other variants */
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            printLine("Please enter a string: ");
            /* FLAW: Incorrectly check the return value: if this function failed it will return NULL,
             * but we are checking to see if the return value is less than 0. */
            if (fgets(data, 100, stdin) < 0)
            {
                printLine("fgets failed!");
                exit(1);
            }
            printLine(data);
        }
    }
}