void CWE400_Resource_Exhaustion__fgets_for_loop_42_bad()
{
    int count;
    /* Initialize count */
    count = -1;
    count = badSource(count);
    {
        size_t i = 0;
        /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}