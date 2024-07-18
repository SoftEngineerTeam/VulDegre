void CWE252_Unchecked_Return_Value__w32ImpersonateSelf_16_bad()
{
    while(1)
    {
        /* FLAW: Do not check if ImpersonateSelf() fails */
        ImpersonateSelf(SecurityImpersonation);
        break;
    }
}