void CWE476_NULL_Pointer_Dereference__int_15_bad()
{
    int * data;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}