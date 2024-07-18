static void badSink(short data)
{
    if(badStatic)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            short result = data + 1;
            printIntLine(result);
        }
    }
}