void CWE253_Incorrect_Check_of_Function_Return_Value__wchar_t_fputc_05_bad()
{
    if(staticTrue)
    {
        /* FLAW: fputwc() might fail, in which case the return value will be WEOF (-1), but
         * we are checking to see if the return value is 0 */
        if (fputwc((wchar_t)L'A', stdout) == 0)
        {
            printLine("fputwc failed!");
        }
    }
}