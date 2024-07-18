static void helperBad(int sig)
{
    if (CWE364_Signal_Handler_Race_Condition__basic_05StructSigAtomicBad != NULL)
    {
        CWE364_Signal_Handler_Race_Condition__basic_05StructSigAtomicBad->val = 2;
    }
}