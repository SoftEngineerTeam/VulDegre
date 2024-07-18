void CWE481_Assigning_Instead_of_Comparing__basic_15_bad()
{
    switch(6)
    {
    case 6:
    {
        int intRand = rand();
        /* FLAW: should be == and INCIDENTIAL CWE 571 Expression Is Always True */
        if(intRand = 5)
        {
            printLine("i was 5");
        }
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}