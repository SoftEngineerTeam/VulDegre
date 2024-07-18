void CWE126_Buffer_Overread__CWE129_large_42_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    data = badSource(data);
    {
        int buffer[10] = { 0 };
        /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
         * This check does not check the upper bounds of the array index */
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}