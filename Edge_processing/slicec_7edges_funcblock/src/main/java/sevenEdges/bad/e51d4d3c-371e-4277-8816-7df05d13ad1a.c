void CWE400_Resource_Exhaustion__fscanf_for_loop_67b_badSink(CWE400_Resource_Exhaustion__fscanf_for_loop_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}