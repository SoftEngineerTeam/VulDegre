void CWE252_Unchecked_Return_Value__w32ImpersonateSelf_05_bad()
{
    if(staticTrue)
    {
        /* FLAW: Do not check if ImpersonateSelf() fails */
        ImpersonateSelf(SecurityImpersonation);
    }
}