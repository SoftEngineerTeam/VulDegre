static void badSink(short data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        short result = data;
        printIntLine(result);
    }
}