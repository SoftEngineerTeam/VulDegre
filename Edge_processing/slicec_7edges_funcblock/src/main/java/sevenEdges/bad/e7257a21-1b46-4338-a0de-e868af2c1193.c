void CWE253_Incorrect_Check_of_Function_Return_Value__char_putchar_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: putchar() might fail, in which case the return value will be EOF (-1), but
         * we are checking to see if the return value is 0 */
        if (putchar((int)'A') == 0)
        {
            printLine("putchar failed!");
        }
    }
}