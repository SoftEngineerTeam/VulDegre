void CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_68b_badSink()
{
    int data = CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_68_badData;
    {
        int i;
        int buffer[10] = { 0 };
        /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
        * This code does check to see if the array index is negative */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* Print the array values */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}