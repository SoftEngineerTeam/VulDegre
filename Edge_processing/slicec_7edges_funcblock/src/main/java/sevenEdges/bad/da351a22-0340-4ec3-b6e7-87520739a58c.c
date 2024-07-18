void CWE476_NULL_Pointer_Dereference__binary_if_15_bad()
{
    switch(6)
    {
    case 6:
    {
        twoIntsStruct *twoIntsStructPointer = NULL;
        /* FLAW: Using a single & in the if statement will cause both sides of the expression to be evaluated
         * thus causing a NPD */
        if ((twoIntsStructPointer != NULL) & (twoIntsStructPointer->intOne == 5))
        {
            printLine("intOne == 5");
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}