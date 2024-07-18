void CWE400_Resource_Exhaustion__fscanf_for_loop_66b_badSink(int countArray[])
{
    /* copy count out of countArray */
    int count = countArray[2];
    {
        size_t i = 0;
        /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}