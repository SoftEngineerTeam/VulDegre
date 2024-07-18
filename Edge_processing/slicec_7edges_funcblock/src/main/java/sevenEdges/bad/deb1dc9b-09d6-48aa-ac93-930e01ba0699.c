static void badSink(int * data)
{
    /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
    printIntLine(*data);
}