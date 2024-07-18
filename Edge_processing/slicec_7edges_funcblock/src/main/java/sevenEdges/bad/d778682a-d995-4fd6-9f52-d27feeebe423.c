void CWE400_Resource_Exhaustion__rand_for_loop_63b_badSink(int * countPtr)
{
    int count = *countPtr;
    {
        size_t i = 0;
        /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}