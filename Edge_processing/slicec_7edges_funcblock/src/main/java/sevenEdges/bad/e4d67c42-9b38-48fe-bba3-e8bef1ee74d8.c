static void badSink(int data)
{
    {
        /* POTENTIAL FLAW: Decrementing data could cause an underflow */
        data--;
        int result = data;
        printIntLine(result);
    }
}