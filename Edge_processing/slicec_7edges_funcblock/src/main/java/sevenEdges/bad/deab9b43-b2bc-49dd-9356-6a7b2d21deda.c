static void helperBad(int sig)
{
    if (CWE364_Signal_Handler_Race_Condition__basic_01StructSigAtomicBad != NULL)
    {
        CWE364_Signal_Handler_Race_Condition__basic_01StructSigAtomicBad->val = 2;
    }
}