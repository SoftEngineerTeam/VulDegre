void CWE253_Incorrect_Check_of_Function_Return_Value__char_fwrite_13_bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        /* FLAW: fwrite() might fail, in which case the return value will not be equal to strlen(data),
         * but we are checking to see if the return value is less than 0 */
        if (fwrite((char *)"string", sizeof(char), strlen("string"), stdout) < 0)
        {
            printLine("fwrite failed!");
        }
    }
}