void CWE400_Resource_Exhaustion__rand_for_loop_14_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    if(globalFive==5)
    {
        /* POTENTIAL FLAW: Set count to a random value */
        count = RAND32();
    }
    if(globalFive==5)
    {
        {
            size_t i = 0;
            /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}