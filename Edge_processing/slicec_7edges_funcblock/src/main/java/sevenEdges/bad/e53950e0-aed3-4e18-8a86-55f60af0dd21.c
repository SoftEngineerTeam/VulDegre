void CWE253_Incorrect_Check_of_Function_Return_Value__w32_ImpersonateSelf_02_bad()
{
    if(1)
    {
        /* FLAW: ImpersonateSelf() could fail and would return 0 (false), but we are checking to see
         * if the return value is greater than zero (true) */
        if (ImpersonateSelf(SecurityImpersonation) > 0)
        {
            exit(1);
        }
    }
}