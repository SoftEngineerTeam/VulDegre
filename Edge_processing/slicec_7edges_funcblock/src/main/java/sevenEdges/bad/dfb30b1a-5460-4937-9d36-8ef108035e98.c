static void badSink(int64_t * data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Possibly freeing memory twice */
        free(data);
    }
}