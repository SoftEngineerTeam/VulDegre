void CWE252_Unchecked_Return_Value__char_putc_15_bad()
{
    switch(6)
    {
    case 6:
        /* FLAW: Do not check the return value */
        putc((int)'A', stdout);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}