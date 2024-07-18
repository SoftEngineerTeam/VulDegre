void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_putc_01_bad()
{
    /* FLAW: putwc() might fail, in which case the return value will be EOF (-1), but
     * we are checking to see if the return value is 0 */
    if (putwc((wchar_t)L'A', stdout) == 0)
    {
        printLine("putwc failed!");
    }
}