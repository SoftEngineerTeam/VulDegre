static void badSink(char data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        --data;
        char result = data;
        printHexCharLine(result);
    }
}