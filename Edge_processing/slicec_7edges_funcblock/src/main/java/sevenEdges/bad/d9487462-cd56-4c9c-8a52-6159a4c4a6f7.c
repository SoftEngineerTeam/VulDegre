static void badSink(int * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(*data);
    }
}