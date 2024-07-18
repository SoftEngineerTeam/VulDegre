void CWE194_Unexpected_Sign_Extension__negative_memmove_44_bad()
{
    short data;
    /* define a function pointer */
    void (*funcPtr) (short) = badSink;
    /* Initialize data */
    data = 0;
    /* FLAW: Use a negative number */
    data = -1;
    /* use the function pointer */
    funcPtr(data);
}