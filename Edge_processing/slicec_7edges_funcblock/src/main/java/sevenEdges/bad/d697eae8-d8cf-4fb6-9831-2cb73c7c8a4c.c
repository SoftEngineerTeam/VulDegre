static void badSink(short data)
{
    {
        /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
        short result = data * data;
        printIntLine(result);
    }
}