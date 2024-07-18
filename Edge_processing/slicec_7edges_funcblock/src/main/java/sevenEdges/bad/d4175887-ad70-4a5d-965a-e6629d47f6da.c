void CWE253_Incorrect_Check_of_Function_Return_Value__char_fputc_08_bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: fputc() might fail, in which case the return value will be EOF (-1), but
         * we are checking to see if the return value is 0 */
        if (fputc((int)'A', stdout) == 0)
        {
            printLine("fputc failed!");
        }
    }
}