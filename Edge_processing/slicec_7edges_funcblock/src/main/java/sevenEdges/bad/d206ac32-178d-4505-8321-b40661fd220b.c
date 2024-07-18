void CWE479_Signal_Handler_Use_of_Non_Reentrant_Function__basic_11_bad()
{
    if(globalReturnsTrue())
    {
        signal(SIGINT, helperBad);
    }
}