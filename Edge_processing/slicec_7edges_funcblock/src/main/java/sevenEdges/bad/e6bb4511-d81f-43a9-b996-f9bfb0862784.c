void CWE479_Signal_Handler_Use_of_Non_Reentrant_Function__basic_03_bad()
{
    if(5==5)
    {
        signal(SIGINT, helperBad);
    }
}