void CWE364_Signal_Handler_Race_Condition__basic_03_bad()
{
    if(5==5)
    {
        {
            structSigAtomic *gStructSigAtomic = NULL;
            signal(SIGINT, SIG_DFL);
            if (CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad != NULL)
            {
                free(CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad);
                CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad = NULL;
            }
            gStructSigAtomic = (structSigAtomic*)malloc(sizeof(structSigAtomic));
            if (gStructSigAtomic == NULL) {exit(-1);}
            CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad = gStructSigAtomic;
            CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad->val = 1;
            /* Assign CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad BEFORE
             * calling 'signal', because pointer types are not (according to spec), atomic
             * with respect to signals.
             *
             * In practice they are on most (all?) POSIX-y computers, but thems the
             * rules
             */
            signal(SIGINT, helperBad);
            /* FLAW: This test, free, and set operation is not atomic, so if signal
             * delivery occurs (for example) between the free and setting to NULL,
             * the signal handler could corrupt the heap, cause an access violation,
             * etc
             *
             * Technically, "CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad = 0" is not atomic on certain theoretical computer
             * systems that don't actually exist, but this should trigger on
             * theoretical as well as actual computer systems.
             */
            if (CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad != NULL)
            {
                free(CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad);
                CWE364_Signal_Handler_Race_Condition__basic_03StructSigAtomicBad = NULL;
            }
        }
    }
}