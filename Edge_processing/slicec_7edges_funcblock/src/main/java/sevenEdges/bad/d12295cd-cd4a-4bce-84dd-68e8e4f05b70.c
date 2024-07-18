void CWE400_Resource_Exhaustion__fscanf_for_loop_22_badSink(int count)
{
    if(CWE400_Resource_Exhaustion__fscanf_for_loop_22_badGlobal)
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