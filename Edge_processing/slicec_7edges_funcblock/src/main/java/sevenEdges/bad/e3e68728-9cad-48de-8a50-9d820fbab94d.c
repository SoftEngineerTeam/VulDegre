void CWE400_Resource_Exhaustion__rand_for_loop_17_bad()
{
    int i,j;
    int count;
    /* Initialize count */
    count = -1;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Set count to a random value */
        count = RAND32();
    }
    for(j = 0; j < 1; j++)
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