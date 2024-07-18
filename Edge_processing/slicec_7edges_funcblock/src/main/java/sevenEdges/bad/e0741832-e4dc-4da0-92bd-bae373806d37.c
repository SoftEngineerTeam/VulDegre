static void badSink(int * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}