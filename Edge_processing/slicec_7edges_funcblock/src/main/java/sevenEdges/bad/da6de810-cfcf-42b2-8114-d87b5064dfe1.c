static void badSink(int * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}